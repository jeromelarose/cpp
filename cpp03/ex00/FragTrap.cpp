#include "FragTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    FragTrap::FragTrap(std::string name) : m_HitPoints(100) , m_MaxHitPoints(100) , m_EnergyPoints(100), m_MaxEnergyPoints(100),
    m_Level(1), m_Name(name), m_MeleeAttackDamage(30), m_RangedAttackDamage(20), m_ArmorDamageReduction(5), m_VaultAttackDamage(0)
    {
        m_tabFcnt[0] = &FragTrap::sing;
        m_tabFcnt[1] = &FragTrap::dragon;
        m_tabFcnt[2] = &FragTrap::surpise;
        m_tabFcnt[3] = &FragTrap::fatality;
        m_tabFcnt[4] = &FragTrap::mom;
        std::cout << std::setw(15) << std::setiosflags(std::ios::left) << m_Name << ": Whaou!!! Je suis en vie grace a mon constructeur!\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    FragTrap::~FragTrap()
    {
        std::cout << std::setw(15) << m_Name << ": C'est quoi ce bouton?\033[37m" << std::endl;
        std::cout << "\033[31mCLIC!!!\nDESTRUCTEUR ENCLENCHER.......5...4..3..2..1..\033[37m"<< std::endl;
        std::cout << std::setw(15) << m_Name << ": Nonnnnnn!!!!\033[37m" << std::endl;
        std::cout << "\033[31mBOOMMMMM\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    std::string const   FragTrap::get_name() const
    {
        return (m_Name);
    }

    int                 FragTrap::get_meleeAttackDamage() const
    {
        return (m_MeleeAttackDamage);
    }

    int                 FragTrap::get_rangedAttackDamage() const
    {
        return (m_RangedAttackDamage);
    }
    
    int                 FragTrap::get_armorDamageReduction() const
    {
        return (m_ArmorDamageReduction);
    }

    int                 FragTrap::get_hitPoints() const
    {
        return (m_HitPoints);
    }
    
    int                 FragTrap::get_maxHitPoints() const
    {
        return (m_MaxHitPoints);
    }

    int                 FragTrap::get_energyPoints() const
    {
        return (m_EnergyPoints);
    }
    
    int                 FragTrap::get_maxEnergyPoints() const
    {
        return (m_MaxEnergyPoints);
    }

    int                 FragTrap::get_vaultAttackDamage() const
    {
        return (m_VaultAttackDamage);
    }

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void FragTrap::rangedAttack(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            std::cout << std::setw(15) << m_Name << ": Ce n'est pas parce que tu est loin que tu ne va pas gouter";
            std::cout << " a mon lancer d'huile usager " << target << "!!!\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mSPLAAAAAAAAAAAAAAAASSSSSSHHHHHH!!!" << "+" << m_RangedAttackDamage << "[A]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Mon huile est tellement vielle que ta perdu " << m_RangedAttackDamage << " point de vie trou du cul de " << target << "\033[37m" << std::endl;
        }
        else
            std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
    }
    void FragTrap::meleeAttack(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            std::cout << std::setw(15) << m_Name << ": D'aussi pres, tu ne vas pas t'en remetre " << target;
            std::cout << ". Goute a ma scie circulaire dans tes rotules!!!\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mziiiiiiiiinnnng zziiiiiiiiiiinnnnng" << "+" << m_MeleeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Et ca fait " << m_MeleeAttackDamage << " point de vie en moins pour le tas de feraille " << target << "\033[37m" << std::endl;
        }
        else
            std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
    }
    void FragTrap::takeDamage(unsigned int amount)
    {
        if (!m_HitPoints)
            std::cout << std::setw(15) << m_Name << ": Arrete de me taper, je n'ai plus de points de vie!!!" << std::endl;
        else
        {
            if ((unsigned int)m_ArmorDamageReduction > amount)
                amount = 0;
            else
                amount -= m_ArmorDamageReduction;
            m_HitPoints -= amount;
            if (m_HitPoints <= 0)
                m_HitPoints = 0;
            if (!m_HitPoints)
                std::cout << std::setw(15) << m_Name << ": Adieu mes points de vie!!!" << std::endl;
            else
            {
                std::cout << std::setw(15) << m_Name << ": Et non. Je n'ai perdu que " << amount << " point de vie grace a mes " << m_ArmorDamageReduction << " d'armure";
                std::cout << ". Il me reste toujours " << m_HitPoints << " points de vie et " << m_EnergyPoints << " points d'energie" << std::endl;
            }
        }
    }
    void FragTrap::beRepaired(unsigned int amount)
    {
        if (m_HitPoints == m_MaxHitPoints)
            std::cout << std::setw(15) << m_Name << ": Il faut vraiment etre un sacree con pour reprendre de l'energie quand on est deja au MAX!!!" << std::endl;
        else
        {
            m_HitPoints += amount;
            if (m_HitPoints > m_MaxHitPoints)
                m_HitPoints = m_MaxHitPoints;
            std::cout << std::setw(15) << m_Name << ": COOL une potion d'essence!" << std::endl;
            std::cout << std::setw(70) << "\033[31mGOUGLOUGLOUGLGOULGOULGOU..." << "+" << amount << "[R]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Avec ces " << amount << " point de potion je reviens a ";
            std::cout << m_HitPoints << " points de vie et " << m_EnergyPoints << " points d'energie, je vais t'ecraser comme une crepe" << std::endl;
        }
    }

//-----------------------------------------------------------------
//          METHODES VAULT_HUNTER
//-----------------------------------------------------------------

    void FragTrap::sing(std::string const &target)
    {
        if (m_EnergyPoints >= 25 && m_HitPoints > 0)
        {
            m_VaultAttackDamage = 40;
            m_EnergyPoints -= 25;
            if (m_EnergyPoints < 0)
                m_EnergyPoints = 0;
            std::cout << std::setw(15) << m_Name << ": Et je tape eux, tape eux, tape... c'est ma facon de tuer...\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mPAFF!! BOUM!! BAM!! POUF!!! " << "+" << m_VaultAttackDamage << "[A]  -25[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": " << m_VaultAttackDamage << " point de vie en moins apres avoir griller tes micro " << target << "\033[37m" << std::endl;
        }
       else
        {
            m_VaultAttackDamage = 0;
            if (m_HitPoints > 0)
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je n'ai plus assez d'energie " << target << "\033[37m" << std::endl; 
            else
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
        }
    }

    void FragTrap::dragon(std::string const &target)
    {
        if (m_EnergyPoints >= 25 && m_HitPoints > 0)
        {
            m_VaultAttackDamage = 45;
            m_EnergyPoints -= 25;
            if (m_EnergyPoints < 0)
                m_EnergyPoints = 0;
            std::cout << std::setw(15) << m_Name << ": La furreur du dragon!!!!!!!!!!\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mYYYAAAAAAAA!!!!! BIM BAM BOUM" << "+" << m_VaultAttackDamage << "[A]  -25[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Et de " << m_VaultAttackDamage << " point de vie dans ta face " << target << "\033[37m" << std::endl;
        }
        else
        {
            m_VaultAttackDamage = 0;
            if (m_HitPoints > 0)
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je n'ai plus assez d'energie " << target << "\033[37m" << std::endl; 
            else
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
        }
    }

    void FragTrap::surpise(std::string const &target)
    {
        if (m_EnergyPoints >= 25 && m_HitPoints > 0)
        {
            m_VaultAttackDamage = 35;
            m_EnergyPoints -= 25;
            if (m_EnergyPoints < 0)
                m_EnergyPoints = 0;
            std::cout << std::setw(15) << m_Name << ": Je suis desoler. Je regrette, pour me faire pardonner accepte ce cadeaux " << target << "\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mTIEN, PRENDS LE.....BOUMMMMMMM!!!!" << "+" << m_VaultAttackDamage << "[A]  -25[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Mais quel abrutit, je viens de t'offir -" << m_VaultAttackDamage << " point de vie " << target << "\033[37m" << std::endl;
        }
        else
        {
            m_VaultAttackDamage = 0;
            if (m_HitPoints > 0)
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je n'ai plus assez d'energie " << target << "\033[37m" << std::endl; 
            else
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
        }
    }

   void FragTrap::fatality(std::string const &target)
    {
        if (m_EnergyPoints >= 25 && m_HitPoints > 0)
        {
            m_VaultAttackDamage = 999;
            m_EnergyPoints -= 25;
            if (m_EnergyPoints < 0)
                m_EnergyPoints = 0;
            std::cout << std::setw(15) << m_Name << ": Technique de mortal combat!!!\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mSLACH...SLACH...SLACH...SLACH     !!!FATALITY!!!" << "+" << m_VaultAttackDamage << "[A]  -25[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Demembrement effectuer pour mister " << target << "\033[37m" << std::endl;
    
        }
        else
        {
            m_VaultAttackDamage = 0;
            if (m_HitPoints > 0)
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je n'ai plus assez d'energie " << target << "\033[37m" << std::endl; 
            else
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
        }
    }

   void FragTrap::mom(std::string const &target)
    {
        if (m_EnergyPoints >= 25 && m_HitPoints > 0)
        {
            m_VaultAttackDamage = 60;
            m_EnergyPoints -= 25;
            if (m_EnergyPoints < 0)
                m_EnergyPoints = 0;
            std::cout << std::setw(15) << m_Name << ": Je viens d'appeler ta mere pour lui dire que tu me tapais, elle arrive...\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31m" + target + " VIEN ICI!!!! ALORS COMME CA ON TAPE? CLAAAAC!!!!" << "+" << m_VaultAttackDamage << "[A]  -25[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": " + target + ", tu test fait humilier comme jamais hahahah\033[37m" << std::endl;
    
        }
        else
        {
            m_VaultAttackDamage = 0;
            if (m_HitPoints > 0)
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je n'ai plus assez d'energie " << target << "\033[37m" << std::endl; 
            else
                std::cout << std::setw(15) << m_Name << ": Tu a de la chance que je que je ne peut plus me relever " << target << "\033[37m" << std::endl;
        }
    }

    void FragTrap::vaulthunter_dot_exe(std::string const & target)
    {
        (this->*(m_tabFcnt[rand() %5]))(target);
    }