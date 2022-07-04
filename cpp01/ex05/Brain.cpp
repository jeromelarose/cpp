/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:52:52 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:52:55 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : m_age(0), m_volume(0), m_qi(0)
{}


std::string   Brain::identify() const
{
    std::stringstream   add;
    add << this;
    return (add.str());
}

void    Brain::set_age(int age)
{
    m_age = age;
}

void    Brain::set_volume(int volume)
{
    m_volume = volume;
}

void    Brain::set_qi(int qi)
{
    m_qi = qi;
}

int     Brain::get_age() const
{
    return (m_age);
}

int     Brain::get_volume() const
{
    return (m_volume);
}

int     Brain::get_qi() const
{
    return (m_qi);
}
