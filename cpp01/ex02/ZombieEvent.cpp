/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:50:03 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:50:06 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <new>

void   ZombieEvent::setZombieType(std::string const type)
{
    m_type = type;
}

Zombie * ZombieEvent::newZombie (std::string name)
{
    Zombie *ret = new Zombie(name, m_type);
    return (ret);
}
