/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:59:01 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:59:02 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    AssaultTerminator::AssaultTerminator()
    {
        std::cout << "* teleports from space *" << std::endl;
    };

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    AssaultTerminator::AssaultTerminator(AssaultTerminator const &assaultTerminator)
    {
        if (this != &assaultTerminator)
        {
            std::cout << "* teleports from space *" << std::endl;
            *this = assaultTerminator;
        }
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    AssaultTerminator::~AssaultTerminator()
    {
        std::cout << "I’ll be back ..." << std::endl;
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assaultTerminator)
    {
        (void)assaultTerminator;
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    AssaultTerminator* AssaultTerminator::clone() const
    {
        return (new AssaultTerminator(*this));
    }

    void AssaultTerminator::battleCry() const
    {
        std::cout << "This code is unclean. Purify it !" << std::endl;
    }

    void AssaultTerminator::rangedAttack() const
    {
        std::cout << "* does nothing *" << std::endl;
    }

    void AssaultTerminator::meleeAttack() const
    {
        std::cout << "* attaque with chainfists *" << std::endl;
    }
