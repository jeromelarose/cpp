/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:14:24 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:14:25 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Cure::Cure() : AMateria("cure")
    {  
    }

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Cure::Cure(Cure const &cure) :  AMateria(cure)
    {
        if (this != &cure)
            setXP(cure.getXP());
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    Cure::~Cure()
    {
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Cure &Cure::operator=(const Cure &cure)
    {
        if (this == &cure)
            return (*this);
        setXP(cure.getXP());
      
        return (*this);
    }

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    AMateria* Cure::clone() const
    {
        AMateria *ret = new Cure(*this);
        return (ret);
       return (new Cure());
    }

    void Cure::use(ICharacter& target)
    {
        AMateria::use(target);
        std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
    }
