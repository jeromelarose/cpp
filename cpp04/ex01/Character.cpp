/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:12:22 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:12:24 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Character::Character(std::string const & name) : m_name(name), m_ap(40), m_maxAp(40), m_weapon(nullptr)
    {
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Character::Character(Character const &character)
    {
        if (this != &character)
            *this = character;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Character::~Character()
    {
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string const   Character::getName() const
    {
        return (m_name);
    }

    int                 Character::getAp() const
    {
        return (m_ap);
    }

    int                 Character::getMaxAp() const
    {
        return (m_maxAp);
    }

    AWeapon             *Character::getWeapon() const
    {
        return (m_weapon);
    }

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Character &Character::operator=(const Character &character)
    {
        if (this != &character)
        {
            m_weapon = character.m_weapon;
            m_name = character.m_name;
            m_maxAp = character.m_maxAp;
            m_ap = character.m_ap;
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void Character::recoverAP()
    {
        if (m_ap < m_maxAp)
        {
            m_ap += 10;
            if (m_ap > m_maxAp)
                m_ap = m_maxAp;
        }
    }

    void Character::equip(AWeapon* weapon)
    {
        m_weapon = weapon;
    }

    void Character::attack(Enemy* enemy)
    {
        if (m_ap >= m_weapon->getAPCost() && m_weapon->getAPCost() >= 0 && m_weapon)
        {
            std::cout << m_name + " attaque " + enemy->getType() + " with a " + m_weapon->getName() << std::endl;
            m_weapon->attack();
            m_ap -= m_weapon->getAPCost();
            if (m_ap < 0)
                m_ap = 0;
            enemy->takeDamage(m_weapon->getDamage());
            if (enemy->getHP() == 0)
                enemy->~Enemy();
        }
    }

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, Character const &character)
    {
        if (character.getWeapon())
            buf << character.getName() + " has " << character.getAp() << " AP and carries a " + character.getWeapon()->getName() << std::endl;
        else
            buf << character.getName() + " has " << character.getAp() << " AP and is unarmed" << std::endl;        
        return (buf);
    }
