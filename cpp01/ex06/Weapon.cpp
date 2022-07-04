/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:54:40 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:54:42 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{}

void                    Weapon::setType(std::string type)
{
    m_type = type;
}

std::string     const   &Weapon::getType() const
{
    return (m_type);
}
