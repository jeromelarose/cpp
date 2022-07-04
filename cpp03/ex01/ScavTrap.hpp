#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ScavTrap
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

    std::string const   get_name() const;
    int     get_level() const;
    int     get_meleeAttackDamage() const;
    int     get_rangedAttackDamage() const;
    int     get_armorDamageReduction() const;
    int     get_hitPoints() const;
    int     get_maxHitPoints() const;
    int     get_energyPoints() const;
    int     get_maxEnergyPoints() const;
    int     get_challengeAttackDamage() const;

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

    int m_HitPoints;
    int m_MaxHitPoints;
    int m_EnergyPoints;
    int m_MaxEnergyPoints;
    int m_Level;
    std::string m_Name;
    int m_MeleeAttackDamage;
    int m_RangedAttackDamage;
    int m_ArmorDamageReduction;
    int m_ChallengeAttackDamage;
    ptrFnct m_tabDefi[3];
};

#endif