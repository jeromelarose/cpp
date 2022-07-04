/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:45 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:11:47 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    AWeapon::AWeapon(std::string const &name, int apcost, int damage) : m_name(name), m_apcost(apcost), m_damage(damage)
    {
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    AWeapon::AWeapon(AWeapon const &weapon)
    {
        if (this != &weapon)
            *this = weapon;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    AWeapon::~AWeapon()
    {
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

std::string const   AWeapon::getName() const
{
    return (m_name);
}

int                 AWeapon::getAPCost() const
{
    return (m_apcost);
}

int                 AWeapon::getDamage() const
{
    return (m_damage);
}

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    AWeapon &AWeapon::operator=(const AWeapon &weapon)
    {
        if (this != &weapon)
        {
            m_damage = weapon.m_damage;
            m_apcost = weapon.m_apcost;
            m_name = weapon.m_name;
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////
