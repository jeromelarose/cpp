/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:54:18 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:54:19 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{}

void    HumanB::attack() const
{
    std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}
