/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:50:17 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:50:19 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
    public:

    void    setZombieType(std::string const type);
    Zombie  *newZombie (std::string name);

    private:

    std::string     m_type;
};

#endif
