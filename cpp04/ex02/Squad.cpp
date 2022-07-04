/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:00:02 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:00:04 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <new>

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Squad::Squad() : m_count(0), m_tab(nullptr)
    {};

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Squad::Squad(Squad const &squad) : m_count(0), m_tab(nullptr)
    {
        if (this != &squad)
        {
            *this = squad;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Squad::~Squad()
    {
        clean();
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

int             Squad::getCount() const
{
    return (m_count);
}

ISpaceMarine*   Squad::getUnit(int nb) const
{
    if (nb < m_count && nb >= 0)
        return (m_tab[nb]);
    return (nullptr);
}

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Squad &Squad::operator=(const Squad &squad)
    {
        if (this != &squad)
        {
            clean();
            for (int i = 0; i < squad.m_count; ++i)
            {
                this->push(squad.getUnit(i)->clone());
            }
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    int             Squad::push(ISpaceMarine *spaceMarine)
    {
        if (!spaceMarine)
            return (0);
        if ( m_count > 0)
        {
            for (int i = 0; i < m_count; ++i)
                if (m_tab[i] == spaceMarine)
                    return (0);
            ISpaceMarine **cpy = new ISpaceMarine*[m_count + 1];
            for (int i = 0; i < m_count; ++i)
                cpy[i] = m_tab[i];
            cpy[m_count] = spaceMarine;
            delete[] (m_tab);
            m_tab = cpy;
            ++m_count;
            return (1);
        }
        else if (spaceMarine != nullptr)
        {
            m_tab = new ISpaceMarine*[1];
            m_tab[0] = spaceMarine;
            m_count++;
        }
        return (0);
    }

    void           Squad::clean()
    {
        for (int i = 0; i < m_count; ++i)
        {
            if (m_tab[i])
            {
                delete (m_tab[i]);
                m_tab[i] = nullptr;
            }
        }
        if (m_tab)
        {
            delete[] (m_tab);
            m_tab = nullptr;
        }
        m_count = 0;
    }
