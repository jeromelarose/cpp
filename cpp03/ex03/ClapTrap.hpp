#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
    public:

//-----------------------------------------------------------------
//          CONSTRUCTEUR
//-----------------------------------------------------------------

    ClapTrap(std::string name = "default");
    ClapTrap(int hit, int hitMax, int energie, int energieMax, int level, std::string name, int melee, int ranged, int armor);


//-----------------------------------------------------------------
//          DESTRUCTEUR
//-----------------------------------------------------------------

    ~ClapTrap();

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

    protected :

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
};

#endif