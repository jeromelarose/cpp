/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:49:37 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:49:39 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <string.h>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern;

typedef Form    *(Intern::*ptrFnc)(const std::string);

class Intern
{
    
public:

//CONSTRUCTEUR    
    Intern();

//CONSTRUCTEUR DE COPIE
    Intern(Intern const &intern);

//DESTRUCTEUR    
    virtual ~Intern();

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    Intern &operator=(const Intern &intern);

//METHODES
    Form    *makePardon(const std::string target);
    Form    *makeRobot(const std::string target);
    Form    *makeShrubbery(const std::string target);
    Form    *makeForm(const std::string type, const std::string target);
    
//STRUCTURE
    typedef struct  s_ptrType
    {
        std::string     type;
        ptrFnc          ptr;
    }              s_ptrType;

private:

//ATTRIBUTS
    s_ptrType m_tab[3];

};

#endif