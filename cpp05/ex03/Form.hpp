/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:23 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:25 by jelarose         ###   ########.fr       */
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
    Form(const std::string name, int gradeSigned, int gradeExec, const std::string target);

//CONSTRUCTEUR DE COPIE
    Form(Form const &form);

//DESTRUCTEUR    
    virtual ~Form();

//ACCESSEURS   
    const std::string       getName() const;
    bool                    getIsSigned() const;
    int                     getGradeSigned() const;
    int                     getGradeExec() const;
    const std::string       getTarget() const;
    void                    setSigned(bool i);

//OPERATEUR D'ASSIGNATION
    Form &operator=(const Form &form);

//METHODES
    void            beSigned(Bureaucrat &bureaucrat);
    virtual void    execute(Bureaucrat const & executor) const = 0;

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

//CLASS EXCEPTION NOT SIGNED
   class FormIsNotSigned: public std::exception
    {
        public:

            const char* what() const throw();
    };

//CLASS EXCEPTION IS ALREADY SIGNED
   class FormIsAlReadySigned: public std::exception
    {
        public:

            const char* what() const throw();
    };

//CLASS EXCEPTION RUNNING OUT OF PARTS
   class RunningOutOfParts: public std::exception
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
    const std::string   m_target;

};

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Form const &Form);

#endif
