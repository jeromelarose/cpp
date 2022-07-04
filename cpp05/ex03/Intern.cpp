/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:49:22 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 10:49:24 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form    *(Intern::*ptrFnc)(const std::string);

//CONSTRUCTEUR    
    Intern::Intern()
    {
        m_tab[0].type = "PresidentialPardonForm";
        m_tab[0].ptr = &Intern::makePardon;
        m_tab[1].type = "RobotomyRequestForm";
        m_tab[1].ptr = &Intern::makeRobot;
        m_tab[2].type = "ShrubberyCreationForm";
        m_tab[2].ptr = &Intern::makeShrubbery;
    };

//CONSTRUCTEUR DE COPIE
    Intern::Intern(Intern const &intern)
    {
        if (this != &intern)
            *this = intern;
    }

//DESTRUCTEUR    
    Intern::~Intern()
    {
    }

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    Intern &Intern::operator=(const Intern &intern)
    {
        if (this != &intern)
        {
            m_tab[0].type = "PresidentialPardonForm";
            m_tab[0].ptr = &Intern::makePardon;
            m_tab[1].type = "RobotomyRequestForm";
            m_tab[1].ptr = &Intern::makeRobot;
            m_tab[2].type = "ShrubberyCreationForm";
            m_tab[2].ptr = &Intern::makeShrubbery;
        }
        return (*this);
    }

//METHODES
    Form    *Intern::makePardon(const std::string target)
    {
        std::cout << "Intern creates PresidentialPardonForm" << std::endl;
        return new PresidentialPardonForm(target);
    }

    Form    *Intern::makeRobot(const std::string target)
    {
        std::cout << "Intern creates RobotomyRequestForm" << std::endl;
        return new RobotomyRequestForm(target);
    }

    Form    *Intern::makeShrubbery(const std::string target)
    {
        std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
        return new ShrubberyCreationForm(target);
    }

    Form    *Intern::makeForm(const std::string type, const std::string target)
    {
        for (int i = 0; i < 3; ++i)
        {
            if (m_tab[i].type == type)
            {
                return ((*this).*m_tab[i].ptr)(target);
            }
        }
        std::cout << "form not found" << std::endl;
        return (nullptr);
    }