#include "SuperTrap.hpp"

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(), NinjaTrap()
    {
        std::cout << std::setiosflags(std::ios::left) << "\033[31mJE SUIS LE CONSTRUCTEUR SUPERTRAP \033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    SuperTrap::~SuperTrap()
    {
        std::cout << "\033[31mJE SUIS LE DESTRUCTEUR SUPERTRAP \033[37m" << std::endl;
    }

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void SuperTrap::rangedAttack(std::string const &target)
    {
        FragTrap::rangedAttack(target);
    }
    void SuperTrap::meleeAttack(std::string const &target)
    {
        NinjaTrap::meleeAttack(target);
    }