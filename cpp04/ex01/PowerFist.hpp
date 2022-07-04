/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:15:02 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:15:03 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    PowerFist();

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    PowerFist(PowerFist const &powerFist);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~PowerFist();

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
