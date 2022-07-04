/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:01 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:03 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FROM_HPP
#define SHRUBBERY_CREATION_FROM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
    
public:

//CONSTRUCTEUR    
    ShrubberyCreationForm(const std::string target);

//CONSTRUCTEUR DE COPIE
    ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm);

//DESTRUCTEUR    
    virtual ~ShrubberyCreationForm();

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyCreationForm);

//METHODES
    void        execute(Bureaucrat const & executor) const;

private:

//ATTRIBUTS
    ShrubberyCreationForm();

};

//OPERATEUR DE FLUX

#endif
