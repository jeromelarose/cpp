#include "ScavTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
    {
        m_tabDefi[0] = &ScavTrap::fingers;
        m_tabDefi[1] = &ScavTrap::game;
        m_tabDefi[2] = &ScavTrap::devine;
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR DE SCAVTRAP\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ScavTrap::~ScavTrap()
    {
        std::cout << "\033[31mJE SUIS LE DESTRUCTEUR DE SCAVTRAP\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    int     ScavTrap::get_challengeAttackDamage() const
    {
        return (m_ChallengeAttackDamage);
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