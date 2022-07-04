/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:12:37 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:12:39 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Enemy::Enemy(int hp, std::string const &type) : m_hp(hp), m_type(type)
    {
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Enemy::Enemy(Enemy const &enemy)
    {
        if (this != &enemy)
            *this = enemy;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Enemy::~Enemy()
    {
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string const   Enemy::getType() const
    {
        return (m_type);
    }
    int     Enemy::getHP() const
    {
        return (m_hp);
    }

    void                Enemy::setHP(int i)
    {
        m_hp = i;
    }

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Enemy &Enemy::operator=(const Enemy &enemy)
    {
        if (this == &enemy)
            return (*this);
        m_hp = enemy.m_hp;
        m_type = enemy.m_type;
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void Enemy::takeDamage(int pv)
    {
        if (m_hp > 0 && pv > 0)
        {
            m_hp -= pv;
            if (m_hp < 0)
                m_hp = 0;
        }
        if (m_hp == 0)
            Enemy::~Enemy();
    }

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////
