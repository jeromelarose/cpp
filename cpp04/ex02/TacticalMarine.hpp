/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:00:27 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:00:28 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    TacticalMarine();

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    TacticalMarine(TacticalMarine const &tacticalMarine);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~TacticalMarine();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    TacticalMarine &operator=(const TacticalMarine &tacticalMarine);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    TacticalMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

};

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, TacticalMarine const &TacticalMarine);

#endif
