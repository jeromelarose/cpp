#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class ScavTrap : public ClapTrap
{
    public:

//-----------------------------------------------------------------
//          POITEUR DE FONCTIONS
//-----------------------------------------------------------------

    typedef void (ScavTrap::*ptrFnct)(std::string const &target);

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    ScavTrap(std::string name);

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~ScavTrap();

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    int     get_challengeAttackDamage() const;

//-----------------------------------------------------------------
//          METHODES CHALLENGE_NEW_COMER
//-----------------------------------------------------------------

    void challengeNewcomer(std::string const & target);
    void fingers(std::string const &target);
    void game(std::string const &target);
    void devine(std::string const &target);

    private :

//-----------------------------------------------------------------
//          ATTRIBUTS
//-----------------------------------------------------------------

    int m_ChallengeAttackDamage;
    ptrFnct m_tabDefi[3];
};

#endif