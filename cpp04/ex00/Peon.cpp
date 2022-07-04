/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:02:01 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:02:03 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Peon::Peon(std::string name) : Victim(name)
    {
        std::cout << "Zog zog." << std::endl;
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Peon::Peon(Peon const &peon) : Victim(peon.get_name())
    {
        if (this != &peon)
        {
            *this = peon;
            std::cout << "Zog zog." << std::endl;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Peon::~Peon()
    {
        std::cout << "Bleuark..." << std::endl;
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void    Peon::getPolymorphed() const
    {
        std::cout << get_name() + " was just polymorphed into a pink pony!" << std::endl;
    }
