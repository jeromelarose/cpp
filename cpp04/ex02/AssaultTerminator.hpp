/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:59:13 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:59:15 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    AssaultTerminator();

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    AssaultTerminator(AssaultTerminator const &assaultTerminator);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~AssaultTerminator();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    AssaultTerminator &operator=(const AssaultTerminator &assaultTerminator);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    AssaultTerminator* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

};

#endif
