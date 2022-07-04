#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    SuperTrap(std::string name);

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~SuperTrap();

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    //attack a distance
    void rangedAttack(std::string const &target);
    //attack en melee(corps a corps)
    void meleeAttack(std::string const &target);
};

#endif