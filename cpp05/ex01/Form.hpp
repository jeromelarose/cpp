/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:54:46 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:54:47 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    
public:

//CONSTRUCTEUR    
    Form(const std::string name, int gradeSigned, int gradeExec);

//CONSTRUCTEUR DE COPIE
    Form(Form const &form);

//DESTRUCTEUR    
    virtual ~Form();

//ACCESSEURS   
    const std::string       getName() const;
    bool                    getIsSigned() const;
    int                     getGradeSigned() const;
    int                     getGradeExec() const;

//OPERATEUR D'ASSIGNATION
    Form &operator=(const Form &form);

//METHODES
    void    beSigned(Bureaucrat &bureaucrat);

//CLASS EXCEPTION LOW
   class GradeTooLowException: public std::exception
    {
        public:

            const char* what() const throw();
    };

//CLASS EXCEPTION HIGHT
    class GradeTooHighException: public std::exception
    {
        public:

            const char* what() const throw();
    };

private:

//ATTRIBUTS
    Form();
    const std::string   m_name;
    bool                m_isSigned;
    const int           m_gradeSigned;
    const int           m_gradeExec;

};

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Form const &Form);

#endif
