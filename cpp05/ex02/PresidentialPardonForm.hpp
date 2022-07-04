/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:55:44 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:55:48 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
    
public:

//CONSTRUCTEUR    
    PresidentialPardonForm(const std::string target);

//CONSTRUCTEUR DE COPIE
    PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm);

//DESTRUCTEUR    
    virtual ~PresidentialPardonForm();

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);

//METHODES
    void        execute(Bureaucrat const & executor) const;

private:

//ATTRIBUTS
    PresidentialPardonForm();

};

//OPERATEUR DE FLUX

#endif
