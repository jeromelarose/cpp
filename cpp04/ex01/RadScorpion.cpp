/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:15:10 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:15:11 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
    {
        std::cout << "* click click click *" << std::endl;
    };

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    RadScorpion::RadScorpion(RadScorpion const &radScorpion) : Enemy(80, "RadScorpion")
    {
        if (this != &radScorpion)
            *this = radScorpion;
    }

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    RadScorpion::~RadScorpion()
    {
        std::cout << "* SPROTCH *" << std::endl;
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

    void RadScorpion::takeDamage(int i)
    {
        Enemy::takeDamage(i);
        if (getHP() == 0)
            RadScorpion::~RadScorpion();
    }


////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////