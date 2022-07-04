/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:53:26 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:53:37 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <ostream>
#include <exception>

class Bureaucrat
{

public:

//CONSTRUCTEUR    
    Bureaucrat(std::string name, int grade);

//CONSTRUCTEUR DE COPIE
    Bureaucrat(Bureaucrat const &bureaucrat);

//DESTRUCTEUR    
    virtual ~Bureaucrat();

//ACCESSEURS   
    std::string const   getName() const;
    int                 getGrade() const;

//OPERATEUR D'ASSIGNATION
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);

//METHODES
    void    up();
    void    down();

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
    Bureaucrat();
    const std::string   m_name;
    int                 m_grade;

};

//OPERATEUR DE FLUX
    std::ostream &operator<<(std::ostream &buf, Bureaucrat const &Bureaucrat);

#endif
