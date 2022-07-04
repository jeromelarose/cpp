#include "ClapTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    ClapTrap::ClapTrap(std::string name) : m_HitPoints(100) , m_MaxHitPoints(100) , m_EnergyPoints(50), m_MaxEnergyPoints(50),
    m_Level(1), m_Name(name), m_MeleeAttackDamage(20), m_RangedAttackDamage(15), m_ArmorDamageReduction(3)
    {
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR CLAPTRAP\033[37m"<< std::endl;
    }

    ClapTrap::ClapTrap(int hit, int hitMax, int energie, int energieMax, int level, std::string name, int melee, int ranged, int armor) 
    : m_HitPoints(hit) , m_MaxHitPoints(hitMax) , m_EnergyPoints(energie), m_MaxEnergyPoints(energieMax),
    m_Level(level), m_Name(name), m_MeleeAttackDamage(melee), m_RangedAttackDamage(ranged), m_ArmorDamageReduction(armor)
    {
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR CLAPTRAP\033[37m"<< std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ClapTrap::~ClapTrap()
    {
        std::cout << "\033[31mJE SUIS LE DESTRUCTEUR CLAPTRAP\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    std::string const   ClapTrap::get_name() const
    {
        return (m_Name);
    }

    int                 ClapTrap::get_level() const
    {
        return (m_Level);
    }

    int                 ClapTrap::get_meleeAttackDamage() const
    {
        return (m_MeleeAttackDamage);
    }

    int                 ClapTrap::get_rangedAttackDamage() const
    {
        return (m_RangedAttackDamage);
    }
    
    int                 ClapTrap::get_armorDamageReduction() const
    {
        return (m_ArmorDamageReduction);
    }

    int                 ClapTrap::get_hitPoints() const
    {
        return (m_HitPoints);
    }
    
    int                 ClapTrap::get_maxHitPoints() const
    {
        return (m_MaxHitPoints);
    }

    int                 ClapTrap::get_energyPoints() const
    {
        return (m_EnergyPoints);
    }
    
    int                 ClapTrap::get_maxEnergyPoints() const
    {
        return (m_MaxEnergyPoints);
    }
    
//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void ClapTrap::rangedAttack(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            std::cout << std::setw(15) << m_Name << ": Lancer de boulons!!!!\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mSLASHHHHHHHHH........BINNNNGGGGGG!!!" << "+" << m_RangedAttackDamage << "[A]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": En plein dans le casque, prends tes " << m_RangedAttackDamage << " point de vie vieux " << target << "\033[37m" << std::endl;
        }
        else
            std::cout << std::setw(15) << m_Name << ": Si il me restais des point de vie je t'aurais atomise " << target << "\033[37m" << std::endl;
    }
    void ClapTrap::meleeAttack(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            std::cout << std::setw(15) << m_Name << ": Tire sur ma pince " << target << "\033[37m" << std::endl;
            std::cout << std::setw(70) << "\033[31mPROUTTTTTT!!!!!!!" << "+" << m_MeleeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": HAHAHAHA mon pet enflamer ta carbonise " << m_MeleeAttackDamage << " point de vie, tu deviens " << target << " la grillade\033[37m" << std::endl;
        }
        else 
            std::cout << std::setw(15) << m_Name << ": Attends que je recupere des points de vie et tu va comprendre ta douleur " << target << "\033[37m" << std::endl;
    }
    void ClapTrap::takeDamage(unsigned int amount)
    {
        if (!m_HitPoints)
            std::cout << std::setw(15) << m_Name << ": Tes vraiment un conard de taper sur un robot sans points de vie..." << std::endl;
        else
        {
            if ((unsigned int)m_ArmorDamageReduction > amount)
                amount = 0;
            else
                amount -= m_ArmorDamageReduction;
            m_HitPoints -= amount;
            if (m_HitPoints < 0)
                m_HitPoints = 0;
            if (!m_HitPoints)
                std::cout << std::setw(15) << m_Name << ": Tu viens de liquider mes derniers points de vie..." << std::endl;
            else
            {
                std::cout << std::setw(15) << m_Name << ": Dans tes reves!!!! J'ai une amure de " << m_ArmorDamageReduction << " donc je n'ai perdu que " << amount << " de vie";
                std::cout << ". Ma vie est a " << m_HitPoints << " et mon energie a " << m_EnergyPoints << std::endl;
            }
        }
    }
    void ClapTrap::beRepaired(unsigned int amount)
    {
        if (m_HitPoints == m_MaxHitPoints)
            std::cout << std::setw(15) << m_Name << ": Je suis abruti, j'ai repris de la potion de batterie alors que je suis a fond!!!" << std::endl;
        else
        {
            m_HitPoints += amount;
            if (m_HitPoints > m_MaxHitPoints)
                m_HitPoints = m_MaxHitPoints;
            std::cout << std::setw(15) << m_Name << ": Pas le choix, je prends une potion de batterie!" << std::endl;
            std::cout << std::setw(70) << "\033[31mGLOGLOGLOGLGOLGOLGO..." << "+" << amount << "[R]  0[E]\033[37m" << std::endl;
            std::cout << std::setw(15) << m_Name << ": Apres avoir bue c'est " << amount << " de potion, ma vie est a ";
            std::cout << m_HitPoints << " et mon energie a " << m_EnergyPoints << ".Tu est dans l'huile jusqu'aux vis!!!" << std::endl;
        }
    }