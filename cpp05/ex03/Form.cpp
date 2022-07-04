/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:55:14 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:18 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//CONSTRUCTEUR    
    Form::Form(const std::string name, int gradeSigned, int gradeExec, const std::string target)
    : m_name(name), m_isSigned(false), m_gradeSigned(gradeSigned), m_gradeExec(gradeExec), m_target(target)
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

    const std::string       Form::getTarget() const
    {
        return m_target;
    }

    void                    Form::setSigned(bool i)
    {
        m_isSigned = i;
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
        if (getIsSigned())
            throw FormIsAlReadySigned();
        if (bureaucrat.getGrade() > m_gradeSigned)
            throw GradeTooHighException();
        m_isSigned = true;
    } 

    void    Form::execute(Bureaucrat const & executor) const
    {
        if (!getIsSigned())
            throw FormIsNotSigned();
        if (executor.getGrade() > getGradeExec())
            throw GradeTooHighException();
    }

//METHODES EXCEPTIONS
    const char* Form::GradeTooLowException::what() const throw()
    {
        return ("the grade of the form is too low");
    }
    
    const char* Form::GradeTooHighException::what() const throw()
    {
        return ("the grade of the form is too high");
    }

    const char* Form::FormIsNotSigned::what() const throw()
    {
        return ("the form is not signed");
    }

    const char* Form::FormIsAlReadySigned::what() const throw()
    {
        return ("the form is already signed");
    }

    const char* Form::RunningOutOfParts::what() const throw()
    {
        return ("running out of parts");
    }

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Form const &form)
    {
        if (form.getIsSigned())
            buf << form.getName() + " is signed " << form.getIsSigned() << ", grade for signed form "
            << form.getGradeSigned() << ", grade to run form " << form.getGradeExec() << ".";
        else
            buf << form.getName() + " is not signed " << form.getIsSigned() << ", grade for signed form "
            << form.getGradeSigned() << ", grade to run form " << form.getGradeExec() << ".";
        return (buf);
    }