#include "NinjaTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    NinjaTrap::NinjaTrap()
    {
        ClapTrap::m_EnergyPoints = 120;
        ClapTrap::m_MaxEnergyPoints = 120;
        ClapTrap::m_MeleeAttackDamage = 60;
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR NINJATRAP\033[37m"<< std::endl;
    }

    NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
    {
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR NINJATRAP\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    NinjaTrap::~NinjaTrap()
    {
        std::cout << "\033[31mJE SUIS LE DESTRUCTEUR NINJATRAP\033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap)
    {
        meleeAttack(ninjaTrap.get_name());
        if (m_HitPoints)
            ninjaTrap.takeDamage(m_MeleeAttackDamage);
    }

    void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap)
    {
        rangedAttack(clapTrap.get_name());
        if (m_HitPoints)
            clapTrap.takeDamage(m_RangedAttackDamage);
    }

    void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap)
    {
        if (m_HitPoints)
            meleeAttack(scavTrap.get_name());
        scavTrap.takeDamage(m_MeleeAttackDamage);
    }

    void NinjaTrap::ninjaShoebox(FragTrap &fragTrap)
    {
        if (m_HitPoints)
            rangedAttack(fragTrap.get_name());
        fragTrap.takeDamage(m_RangedAttackDamage);
    }