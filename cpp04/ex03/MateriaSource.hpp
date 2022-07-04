/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:48 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:15:51 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <string>
#include <iostream>
#include <ostream>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource
{
    
public:

////////////////////////////////////////////////////
//              CONSTRUCTEUR    
////////////////////////////////////////////////////

    MateriaSource();

////////////////////////////////////////////////////
//              CONSTRUCTEUR DE COPIE
////////////////////////////////////////////////////

    MateriaSource(MateriaSource const &materiaSource);

////////////////////////////////////////////////////
//              DESTRUCTEUR    
////////////////////////////////////////////////////

    virtual ~MateriaSource();

////////////////////////////////////////////////////
//              ACCESSEURS   
////////////////////////////////////////////////////


////////////////////////////////////////////////////
//              OPERATEUR D'ASSIGNATION
////////////////////////////////////////////////////

    MateriaSource &operator=(const MateriaSource &materiaSource);

////////////////////////////////////////////////////
//              METHODES
////////////////////////////////////////////////////

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

private:

////////////////////////////////////////////////////
//              ATTRIBUTS
////////////////////////////////////////////////////

    AMateria    *m_tab[4];

////////////////////////////////////////////////////
//              METHODES PROTECTED
////////////////////////////////////////////////////
    
    void   clean();

};

#endif
