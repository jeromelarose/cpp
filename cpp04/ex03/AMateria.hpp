/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:14:02 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:14:04 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class AMateria
{
    public:

        AMateria(std::string const & type);
        AMateria(AMateria const &cure);
        virtual ~AMateria();
        std::string const &getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        void    setXP(unsigned int xp);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);

    private:
    
        AMateria();
        std::string     m_type;
        unsigned int    m_xp;

};

#endif
