/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:42 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:15:43 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    MateriaSource::MateriaSource()
    {
        for (int i = 0; i < 4; ++i)
            m_tab[i] = nullptr;
    };

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    MateriaSource::MateriaSource(MateriaSource const &materiaSource)
    {
        if (this == &materiaSource)
        {
            for (int i = 0; i < 4; ++i)
                m_tab[i] = materiaSource.m_tab[i];
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    MateriaSource::~MateriaSource()
    {
        clean();
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
    {
        if (this == &materiaSource)
        {
            clean();
            for (int i = 0; i < 4; ++i)
                m_tab[i] = materiaSource.m_tab[i];
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

void    MateriaSource::learnMateria(AMateria* aMateria)
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

 void   MateriaSource::clean()
{
    for (int i = 0; i < 4; ++i)
    {
        if (m_tab[i])
            delete (m_tab[i]);
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (m_tab[i])
            if (m_tab[i]->getType() == type)
                return (m_tab[i]->clone());
    }
    return (0);
}
