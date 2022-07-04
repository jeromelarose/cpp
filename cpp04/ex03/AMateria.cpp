/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:13:55 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:13:57 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    AMateria::AMateria(std::string const & type) : m_type(type), m_xp(0)
    {
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    AMateria::AMateria(AMateria const &aMateria)
    {
        if (this != &aMateria)
        {
            m_type = aMateria.m_type;
            m_xp = aMateria.m_xp;
            *this = aMateria;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    AMateria::~AMateria()
    {
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string const   &AMateria::getType() const
    {
        return (m_type);
    }

    unsigned int        AMateria::getXP() const
    {
        return (m_xp);
    }

    void                AMateria::setXP(unsigned int xp)
    {
        m_xp = xp;   
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void AMateria::use(ICharacter& target)
    {
        (void)target;
        m_xp += 10;
    }
