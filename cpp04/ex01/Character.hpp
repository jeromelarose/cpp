/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:12:28 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:12:30 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Character(std::string const & name);

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    Character(Character const &character);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~Character();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////

    std::string const   getName() const;
    int                 getAp() const;
    int                 getMaxAp() const;
    AWeapon             *getWeapon() const;

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Character &operator=(const Character &character);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

    Character();
    std::string     m_name;
    int             m_ap;
    int             m_maxAp;
    AWeapon         *m_weapon;

};

////////////////////////////////////////////////////
//              OPERATEUR DE FLUX
////////////////////////////////////////////////////

    std::ostream &operator<<(std::ostream &buf, Character const &Character);

#endif
