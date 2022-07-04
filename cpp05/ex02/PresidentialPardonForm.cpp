/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:36 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:37 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//CONSTRUCTEUR    
    PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : Form("PresidentialPardonForm", 25, 5, target)
    {
    };

//CONSTRUCTEUR DE COPIE
    PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm)
    : Form(presidentialPardonForm)
    {
    }

//DESTRUCTEUR    
    PresidentialPardonForm::~PresidentialPardonForm()
    {
    }

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
    {
        if (this == &presidentialPardonForm)
        {
            setSigned(presidentialPardonForm.getIsSigned());
        }
        return (*this);
    }

//METHODES
    void        PresidentialPardonForm::execute(Bureaucrat const & executor) const
    {
        Form::execute(executor);
        std::cout << getTarget() + " was forgiven by Zafod Beeblebrox." << std::endl;
    }

//METHODES EXCEPTIONS

//OPERATEUR DE FLUX
