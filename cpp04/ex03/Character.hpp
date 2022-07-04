/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:14:16 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:14:18 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character;

class Character : public ICharacter
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    Character(std::string name);

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

    std::string const & getName() const;

////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    Character &operator=(const Character &character);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void equip(AMateria* aMateria);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

    Character();
    std::string m_name;
    AMateria    *m_tab[4];

////////////////////////////////////////////////////
//              METHODES PROTECTED
////////////////////////////////////////////////////
    
    void   clean();

};

#endif
