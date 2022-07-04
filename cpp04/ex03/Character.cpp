/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:14:10 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:14:11 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Character::Character(std::string name) : m_name(name)
    {
        for (int i = 0; i < 4; ++i)
            m_tab[i] = nullptr;
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Character::Character(Character const &character)
    {
        if (this != &character)
        {
            m_name = character.getName();
            for (int i = 0; i < 4; ++i)
            {
                m_tab[i] = character.m_tab[i];
            }
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Character::~Character()
    {
        clean();
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string const &Character::getName() const
    {
        return (m_name);
    }

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Character &Character::operator=(const Character &character)
    {
        if (this != &character)
        {
            m_name = character.getName();
            clean();
            for (int i = 0; i < 4; ++i)
            {
                m_tab[i] = character.m_tab[i];
            }
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void Character::equip(AMateria* aMateria)
    {
        int i = 0;
        for (i = 0; i < 4; ++i)
        {
            if (!m_tab[i])
                break ;
        }
        if (i < 4 && aMateria)
            m_tab[i] = aMateria;
    }

    void Character::unequip(int idx)
    {
        if (idx >= 0 && idx < 4)
            m_tab[idx] = nullptr;
    }

    void Character::use(int idx, ICharacter& target)
    {
        if (idx >= 0 && idx < 4 && m_tab[idx])
            if (m_tab[idx])
                m_tab[idx]->use(target);
    }

    void   Character::clean()
    {
        for (int i = 0; i < 4; ++i)
        {
            if(m_tab[i])
            {
                delete (m_tab[i]);
            }
        }
    }
