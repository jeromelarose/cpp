/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:13:16 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:13:18 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    PlasmaRifle();

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    PlasmaRifle(PlasmaRifle const &plasmaRifle);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~PlasmaRifle();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void attack() const;

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

};

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

#endif