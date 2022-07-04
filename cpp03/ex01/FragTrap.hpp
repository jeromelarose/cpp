#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class FragTrap
{
    public:

//-----------------------------------------------------------------
//          POITEUR DE FONCTIONS
//-----------------------------------------------------------------

    typedef void (FragTrap::*ptrFnct)(std::string const &target);

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    FragTrap(std::string name);

//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~FragTrap();

//-----------------------------------------------------------------
//          ACCESSEURS
//-----------------------------------------------------------------

    std::string const   get_name() const;
    int     get_level() const;
    int     get_meleeAttackDamage() const;
    int     get_rangedAttackDamage() const;
    int     get_armorDamageReduction() const;
    int     get_hitPoints() const;
    int     get_maxHitPoints() const;
    int     get_energyPoints() const;
    int     get_maxEnergyPoints() const;
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

    private :

//-----------------------------------------------------------------
//          ATTRIBUTS
//-----------------------------------------------------------------

    int m_HitPoints;
    int m_MaxHitPoints;
    int m_EnergyPoints;
    int m_MaxEnergyPoints;
    int m_Level;
    std::string m_Name;
    int m_MeleeAttackDamage;
    int m_RangedAttackDamage;
    int m_ArmorDamageReduction;
    int m_VaultAttackDamage;
    ptrFnct m_tabFcnt[5];
};

#endif