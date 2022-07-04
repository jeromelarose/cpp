/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:51:39 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:51:41 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : m_nbZombie(n)
{
    if (n < 0)
        n = 0;
    init_lst();
    m_tab = new Zombie[n];
    for (int i = 0; i < n; ++i)
    {
        m_tab[i].set_name(m_lst[rand()%30]);
        m_tab[i].set_type("glouton");
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] (m_tab);
}

void   ZombieHorde::announce()
{
    for (int i = 0; i < m_nbZombie; ++i)
        m_tab[i].announce();
}

void   ZombieHorde::init_lst()
{
    m_lst[0] = "jerome";   
    m_lst[1] = "paul";            
    m_lst[2] = "laurent";            
    m_lst[3] = "fabien";            
    m_lst[4] = "marie";            
    m_lst[5] = "sarha";            
    m_lst[6] = "lola";            
    m_lst[7] = "pierre";            
    m_lst[8] = "fabrice";            
    m_lst[9] = "jeane";
    m_lst[10] = "anais";   
    m_lst[11] = "hugo";            
    m_lst[12] = "enzo";            
    m_lst[13] = "hector";            
    m_lst[14] = "charle";            
    m_lst[15] = "manu";            
    m_lst[16] = "gaelle";            
    m_lst[17] = "coco";            
    m_lst[18] = "loulou";            
    m_lst[19] = "rose";
    m_lst[20] = "victor";   
    m_lst[21] = "yoann";            
    m_lst[22] = "yann";            
    m_lst[23] = "sylvie";            
    m_lst[24] = "melvine";            
    m_lst[25] = "leo";            
    m_lst[26] = "melanie";            
    m_lst[27] = "valerie";            
    m_lst[28] = "arthur";            
    m_lst[29] = "chacha";
}
