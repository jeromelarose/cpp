/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:55:54 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:55:57 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_OMY_REQUEST_FORM_HPP
#define ROBOT_OMY_REQUEST_FORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    
public:

//CONSTRUCTEUR    
    RobotomyRequestForm(const std::string target);

//CONSTRUCTEUR DE COPIE
    RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm);

//DESTRUCTEUR    
    virtual ~RobotomyRequestForm();

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);

//METHODES
    void        execute(Bureaucrat const & executor) const;

private:

//ATTRIBUTS
    RobotomyRequestForm();

};

//OPERATEUR DE FLUX

#endif
