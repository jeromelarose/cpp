/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:02:20 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:02:22 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Sorcerer::Sorcerer(std::string name, std::string title) : m_name(name), m_title(title)
    {
        std::cout << m_name + ", " + m_title + ", is born!" << std::endl;
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Sorcerer::Sorcerer(Sorcerer const &sorcerer)
    {
        if (this != &sorcerer)
            *this = sorcerer;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Sorcerer::~Sorcerer()
    {
        std::cout << m_name + ", " + m_title + ", is dead. Consequences will never be the same!" << std::endl;
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string    Sorcerer::get_name() const
    {
        return (m_name);
    }

    std::string    Sorcerer::get_title() const
    {
        return (m_title);
    }

    void           Sorcerer::set_title(std::string title)
    {
        m_title = title;
    }

    void           Sorcerer::set_name(std::string name)
    {
        m_name = name;
    }

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
    {
        if (this != &sorcerer)
        {
            this->m_name = sorcerer.m_name;
            this->m_title = sorcerer.m_title;
        }
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

void    Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, Sorcerer const &sorcerer)
    {
        buf << "I am " + sorcerer.get_name() + ", " + sorcerer.get_title() + ", and i like ponies!" << std::endl;
        return (buf);
    }
