#include "ScavTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    ScavTrap::ScavTrap(std::string name) : m_HitPoints(100) , m_MaxHitPoints(100) , m_EnergyPoints(50), m_MaxEnergyPoints(50),
    m_Level(1), m_Name(name), m_MeleeAttackDamage(20), m_RangedAttackDamage(15), m_ArmorDamageReduction(3), m_ChallengeAttackDamage(0)
    {
        m_tabDefi[0] = &ScavTrap::fingers;
        m_tabDefi[1] = &ScavTrap::game;
        m_tabDefi[2] = &ScavTrap::devine;

        std::cout << "\033[31mPLUS QUE A ALLUMER.....\nCLIC!!!\033[37m"<< std::endl;
        std::cout << std::setw(15) << std::setiosflags(std::ios::left) << m_Name << ": ZZZIIIII... Merci constructeur. Me voila operationel\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ScavTrap::~ScavTrap()
    {
        std::cout << std::setw(15) << m_Name << ": C'est quoi ce voyant? L'huile?\033[37m" << std::endl;
        std::cout << "\033[31mCLIC!!!\nVOUS N'AVEZ PLUS D'HUILE LE MOTEUR VAS EXPLOSER...BIP...BIP...BIP...\033[37m"<< std::endl;
        std::cout << std::setw(15) << m_Name << ": Nonnnnnn!!!!\033[37m" << std::endl;
        std::cout << "\033[31mBOOMMMMM\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    std::string const   ScavTrap::get_name() const
    {
        return (m_Name);
    }

    int                 ScavTrap::get_meleeAttackDamage() const
    {
        return (m_MeleeAttackDamage);
    }

    int                 ScavTrap::get_rangedAttackDamage() const
    {
        return (m_RangedAttackDamage);
    }
    
    int                 ScavTrap::get_armorDamageReduction() const
    {
        return (m_ArmorDamageReduction);
    }

    int                 ScavTrap::get_hitPoints() const
    {
        return (m_HitPoints);
    }
    
    int                 ScavTrap::get_maxHitPoints() const
    {
        return (m_MaxHitPoints);
    }

    int                 ScavTrap::get_energyPoints() const
    {
        return (m_EnergyPoints);
    }
    
    int                 ScavTrap::get_maxEnergyPoints() const
    {
        return (m_MaxEnergyPoints);
    }

    int                 ScavTrap::get_challengeAttackDamage() const
    {
        return (m_ChallengeAttackDamage);
    }
    
//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void ScavTrap::rangedAttack(std::string const &target)
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
    void ScavTrap::meleeAttack(std::string const &target)
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
    void ScavTrap::takeDamage(unsigned int amount)
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
    void ScavTrap::beRepaired(unsigned int amount)
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

//-----------------------------------------------------------------
//          METHODES CHALLENGE_NEW_COMMER
//-----------------------------------------------------------------

    void ScavTrap::fingers(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            m_ChallengeAttackDamage = 40;
            std::cout << std::setw(15) << m_Name << ": Trouve combien j'ai de doigts?\033[37m" << std::endl;
            int finger = rand() %10 +1;
            std::cout << "\033[31mEst ce que c'est " << finger << " DOIGHTS?\033[37m" << std::endl;
            if (finger == rand()%10 +1)
            {
                std::cout << std::setw(70) << "\033[31mGAGNER!!! " << "-" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                m_HitPoints -= m_ChallengeAttackDamage;
                if (m_HitPoints < 0)
                    m_HitPoints = 0;
                std::cout << std::setw(15) << m_Name << ": Pas de chance je viens de perdre " << m_ChallengeAttackDamage << " PV, il m'en reste ";
                std:: cout << m_HitPoints << " et j'ai toujours mes " << m_EnergyPoints << " points d'energie\033[37m" << std::endl;
                m_ChallengeAttackDamage = 0;
            }
            else
            {
                std::cout << std::setw(70) << "\033[31mPERDU!!! " << "+" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                std::cout << std::setw(15) << m_Name << ": Je viens de t'enlever " << m_ChallengeAttackDamage <<" PV\033[37m" << std::endl;
            }
        }
        else
        {
            m_ChallengeAttackDamage = 0;
            std::cout << std::setw(15) << m_Name << ": Si j'avais de la potion de batterie mes challenges t'aurons debouloner " << target << "\033[37m" << std::endl;
        }
    }

    void ScavTrap::game(std::string const &target)
    {
         if (m_HitPoints > 0)
        {
            std::string tab[3]{"PIERRE", "FEUILLE", "CISEAUX"};
            m_ChallengeAttackDamage = 55;
            std::cout << std::setw(15) << m_Name << ": Pierre...Feuille...Ciseaux!!!\033[37m" << std::endl;
            std::string choice = tab[rand() %3];
            std::cout << "\033[31m" << choice << "?\033[37m" << std::endl;
            if (choice == tab[rand()%3])
            {
                std::cout << std::setw(70) << "\033[31mGAGNER!!! " << "-" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                m_HitPoints -= m_ChallengeAttackDamage;
                if (m_HitPoints < 0)
                    m_HitPoints = 0;
                std::cout << std::setw(15) << m_Name << ": Pas de chance je viens de perdre " << m_ChallengeAttackDamage << " PV, il m'en reste ";
                std:: cout << m_HitPoints << " et j'ai toujours mes " << m_EnergyPoints << " points d'energie\033[37m" << std::endl;
                m_ChallengeAttackDamage = 0;
            }
            else
            {
                std::cout << std::setw(70) << "\033[31mPERDU!!! " << "+" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                std::cout << std::setw(15) << m_Name << ": Je viens de t'enlever " << m_ChallengeAttackDamage <<" PV\033[37m" << std::endl;
            }
        }
        else
        {
            m_ChallengeAttackDamage = 0;
            std::cout << std::setw(15) << m_Name << ": Si j'avais de la potion de batterie mes challenges t'aurons debouloner " << target << "\033[37m" << std::endl;
        }
    }

    void ScavTrap::devine(std::string const &target)
    {
        if (m_HitPoints > 0)
        {
            std::string tab[3]{"LE FACTEUR?", "JONATHAN?", "UNE BANANE FONCTIONNAIRE?"};
            m_ChallengeAttackDamage = 35;
            std::cout << std::setw(15) << m_Name << ": Qu'est ce qui est jaune et qui attends?\033[37m" << std::endl;
            std::string choice = tab[rand() %3];
            std::cout << "\033[31m" << choice << "?\033[37m" << std::endl;
            if (choice == tab[1])
            {
                std::cout << std::setw(70) << "\033[31mGAGNER!!! " << "-" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                m_HitPoints -= m_ChallengeAttackDamage;
                if (m_HitPoints < 0)
                    m_HitPoints = 0;
                std::cout << std::setw(15) << m_Name << ": Pas de chance je viens de perdre " << m_ChallengeAttackDamage << " PV, il m'en reste ";
                std:: cout << m_HitPoints << " et j'ai toujours mes " << m_EnergyPoints << " points d'energie\033[37m" << std::endl;
                m_ChallengeAttackDamage = 0;
            }
            else
            {
                std::cout << std::setw(70) << "\033[31mPERDU!!! " << "+" << m_ChallengeAttackDamage << "[A]  0[E]\033[37m" << std::endl;
                std::cout << std::setw(15) << m_Name << ": Je viens de t'enlever " << m_ChallengeAttackDamage <<" PV\033[37m" << std::endl;
            }
        }
        else
        {
            m_ChallengeAttackDamage = 0;
            std::cout << std::setw(15) << m_Name << ": Si j'avais de la potion de batterie mes challenges t'aurons debouloner " << target << "\033[37m" << std::endl;
        }
   }

    void ScavTrap::challengeNewcomer(std::string const & target)
    {
        (this->*(m_tabDefi[rand()%3]))(target);
    }