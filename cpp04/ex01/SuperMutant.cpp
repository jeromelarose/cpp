/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:15:27 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:15:28 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
    {
        std::cout << "Gaaah. Break everything !" << std::endl;
    };

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    SuperMutant::SuperMutant(SuperMutant const &superMutant) : Enemy(170, "Super Mutant")
    {
        if (this != &superMutant)
            *this = superMutant;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    SuperMutant::~SuperMutant()
    {
        std::cout << "Aaargh ..." << std::endl;
    }

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void SuperMutant::takeDamage(int pv)
    {
        if (getHP() > 0 && pv > 0)
        {
            setHP(getHP() - 3);
            if (getHP() < 0)
                setHP(0);
            Enemy::takeDamage(pv);
        }
        if (getHP() == 0)
            SuperMutant::~SuperMutant();
    }

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////
