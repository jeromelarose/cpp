/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:51:28 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:51:30 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

void    Zombie::set_name(std::string name)
{
    m_name = name;
}

void    Zombie::set_type(std::string type)
{
    m_type = type;
}

void    Zombie::advert() const
{
    std::cout << "Je suis " << m_name << " de type "
    << m_type << " HAHAHAHAHAHAHAHAHA!!!" << std::endl;
    
}

void    Zombie::announce() const
{
    std::cout << "Je suis " << m_name << " de type "
    << m_type << " le plus fort de tous!!!" << std::endl;
}
