/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:54:35 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:54:36 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//CONSTRUCTEUR    
    Form::Form(const std::string name, int gradeSigned, int gradeExec)
    : m_name(name), m_isSigned(false), m_gradeSigned(gradeSigned), m_gradeExec(gradeExec)
    {
        if (m_gradeSigned < 1 || m_gradeExec < 1)
            throw GradeTooHighException();
        else if (m_gradeSigned > 150 || m_gradeExec > 150)
            throw GradeTooLowException();
    };

//CONSTRUCTEUR DE COPIE
    Form::Form(Form const &form)
    : m_name(form.m_name), m_isSigned(form.m_isSigned), m_gradeSigned(form.m_gradeSigned), m_gradeExec(form.m_gradeExec)
    {
        if (this != &form)
        {
            if (m_gradeSigned < 1 || m_gradeExec < 1)
                throw GradeTooHighException();
            else if (m_gradeSigned > 150 || m_gradeExec > 150)
                throw GradeTooLowException();
        }
    }

//DESTRUCTEUR    
    Form::~Form()
    {
    }

//ACCESSEURS   
    const std::string       Form::getName() const
    {
        return m_name;
    }

    bool                    Form::getIsSigned() const
    {
        return m_isSigned;
    }

    int                     Form::getGradeSigned() const
    {
        return m_gradeSigned;
    }

    int                     Form::getGradeExec() const
    {
        return m_gradeExec;
    }

//OPERATEUR D'ASSIGNATION
    Form &Form::operator=(const Form &form)
    {
        if (this == &form)
        {
            m_isSigned = form.m_isSigned;
        }
        return (*this);
    }

//METHODES
    void    Form::beSigned(Bureaucrat &bureaucrat)
    {
        if (bureaucrat.getGrade() > m_gradeSigned)
            throw Form::GradeTooLowException();
        m_isSigned = true;
    }

//METHODES EXCEPTIONS
    const char* Form::GradeTooLowException::what() const throw()
    {
        return ("Form::GradeTooLowException");
    }
    
    const char* Form::GradeTooHighException::what() const throw()
    {
        return ("Form::GradeTooHighException");
    }

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Form const &form)
    {
        if (form.getIsSigned())
            buf << form.getName() + ", form is signed " << form.getIsSigned() << ", grade for signed form "
            << form.getGradeSigned() << ", grade to run form " << form.getGradeExec() << ".";
        else
            buf << form.getName() + ", form is not signed " << form.getIsSigned() << ", grade for signed form "
            << form.getGradeSigned() << ", grade to run form " << form.getGradeExec() << ".";
        return (buf);
    }
