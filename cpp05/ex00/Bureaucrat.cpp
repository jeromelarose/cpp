/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:52:47 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:53:12 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//CONSTRUCTEUR    
    Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        m_grade = grade;
    };

//CONSTRUCTEUR DE COPIE
    Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : m_name(bureaucrat.m_name)
    {
        if (this != &bureaucrat)
        {
            m_grade = bureaucrat.m_grade;
            if (m_grade < 1)
                throw GradeTooHighException();
            else if (m_grade > 150)
                throw GradeTooLowException();
        }
    }

//DESTRUCTEUR    
    Bureaucrat::~Bureaucrat()
    {
    }

//ACCESSEURS   
    std::string const   Bureaucrat::getName() const
    {
        return m_name;
    }

    int                 Bureaucrat::getGrade() const
    {
        return m_grade;
    }

//OPERATEUR D'ASSIGNATION
    Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
    {
        if (this != &bureaucrat)
        {
            m_grade = bureaucrat.m_grade;
        }
        return (*this);
    }

//METHODES
    void    Bureaucrat::up()
    {
        if (m_grade == 1)
            throw GradeTooHighException();
        else
            m_grade--;
    }

    void    Bureaucrat::down()
    {
        if (m_grade == 150)
            throw GradeTooLowException();
        else
            m_grade++;
    }

//METHODES EXCEPTIONS
    const char* Bureaucrat::GradeTooLowException::what() const throw()
    {
        return ("Bureaucrat::GradeTooLowException");
    }
    
    const char* Bureaucrat::GradeTooHighException::what() const throw()
    {
        return ("Bureaucrat::GradeTooHighException");
    }

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Bureaucrat const &bureaucrat)
    {
        buf << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << ".";
        return (buf);
    }
