/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:42 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:43 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//CONSTRUCTEUR    
    RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : Form("RobotomyRequestForm", 72, 45, target)
    {
    };

//CONSTRUCTEUR DE COPIE
    RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm)
    : Form(robotomyRequestForm)
    {
    }

//DESTRUCTEUR    
    RobotomyRequestForm::~RobotomyRequestForm()
    {
    }

//ACCESSEURS

//OPERATEUR D'ASSIGNATION
    RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
    {
        if (this == &robotomyRequestForm)
        {
            setSigned(robotomyRequestForm.getIsSigned());
        }
        return (*this);
    }

//METHODES
    void        RobotomyRequestForm::execute(Bureaucrat const & executor) const
    {
        Form::execute(executor);
        if (rand() %2)
        {
            std::cout << "VIIIIIIIIIIMMM....VOUUUUUUUUUUUUU....ZIIIIIIIIII...." << std::endl;
            std::cout << getTarget() + " was robotomized" << std::endl;
        }
        else
            throw RunningOutOfParts();
    }

//METHODES EXCEPTIONS

//OPERATEUR DE FLUX