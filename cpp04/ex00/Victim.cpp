/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:02:36 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:02:38 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Victim::Victim(std::string name) : m_name(name)
    {
        std::cout << "A random victim called " + m_name + " just appeared!" << std::endl;
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Victim::Victim(Victim const &victim)
    {
        if (this != &victim)
        {
            *this = victim;
            std::cout << "A random victim called " + m_name + " just appeared!" << std::endl;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Victim::~Victim()
    {
        std::cout << "The victim " + m_name + " died for no apparent reasons!" << std::endl;
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string    Victim::get_name() const
    {
        return (m_name);
    }

    void           Victim::set_name(std::string name)
    {
        m_name = name;
    }

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Victim &Victim::operator=(const Victim &victim)
    {
        if (this == &victim)
            return (*this);
        this->m_name = victim.m_name;
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void    Victim::getPolymorphed() const
    {
        std::cout << m_name + " was just polymorphed in a cute little sheep!" << std::endl;
    }

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, Victim const &victim)
    {
        buf << "I'm " + victim.get_name() + " and I like otters!" << std::endl;
        return (buf);
    }
