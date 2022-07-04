#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{ 
    public:

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    NinjaTrap();
    NinjaTrap(std::string name);

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~NinjaTrap();

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    void ninjaShoebox(NinjaTrap &ninjaTrap);
    void ninjaShoebox(ClapTrap &clapTrap);
    void ninjaShoebox(ScavTrap &scavTrap);
    void ninjaShoebox(FragTrap &fragTrap);
};

#endif