#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:

//-----------------------------------------------------------------
//          POITEUR DE FONCTIONS
//-----------------------------------------------------------------

    typedef void (FragTrap::*ptrFnct)(std::string const &target);

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    FragTrap();
    FragTrap(std::string name);

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~FragTrap();

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    int     get_vaultAttackDamage() const;

//-----------------------------------------------------------------
//          METHODES
//-----------------------------------------------------------------

    //attack a distance
    void rangedAttack(std::string const &target);
    //attack en melee(corps a corps)
    void meleeAttack(std::string const &target);
    //prend des degats
    void takeDamage(unsigned int amount);
    //etre reparer
    void beRepaired(unsigned int amount);

//-----------------------------------------------------------------
//          METHODES VAULT_HUNTER
//-----------------------------------------------------------------

    void vaulthunter_dot_exe(std::string const & target);
    void sing(std::string const &target);
    void dragon(std::string const &target);
    void surpise(std::string const &target);
    void fatality(std::string const &target);
    void mom(std::string const &target);

    protected:

//-----------------------------------------------------------------
//          ATTRIBUTS
//-----------------------------------------------------------------
 
    int m_VaultAttackDamage;
    ptrFnct m_tabFcnt[5];
};

#endif