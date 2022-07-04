/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:02:27 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:02:29 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "Victim.hpp"

class Sorcerer
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Sorcerer(std::string name, std::string title);

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Sorcerer(Sorcerer const &sorcerer);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~Sorcerer();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string    get_name() const;
    std::string    get_title() const;
    void           set_title(std::string title);
    void           set_name(std::string name);

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Sorcerer &operator=(const Sorcerer &sorcerer);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

void polymorph(Victim const &victim) const;

private:

    Sorcerer();

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

    std::string m_name;
    std::string m_title;

};

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, Sorcerer const &Sorcerer);

#endif
