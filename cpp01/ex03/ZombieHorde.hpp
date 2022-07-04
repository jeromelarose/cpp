/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:51:48 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:51:50 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"
#include <new>

class   ZombieHorde
{
    public:

    ZombieHorde(int n);
    ~ZombieHorde();

    Zombie  &get_zombie(int n)
    {
        return (m_tab[n]);
    }

    void    announce();

    private:

    void        init_lst();
    Zombie      randomName();
    Zombie          *m_tab;
    std::string     m_lst[30];
    int             m_nbZombie;
};

#endif
