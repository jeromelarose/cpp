/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:55:21 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:55:34 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int     main()
{
    srand(clock());
    Bureaucrat              *jean;
    Intern  intern;

    std::cout << "\n\033[33mPARTIE AVEC SHRUBERRY_CREATION_FORM\n\033[37m" << std::endl;

    {
        Form *tree = intern.makeForm("ShrubberyCreationForm", "tree");
        std::cout << std::endl;
        if (tree)
        {
            try
            {
                jean = new Bureaucrat("jean", 146);
                try
                {
                    std::cout << *jean << std::endl;
                    std::cout << *tree << std::endl;
                    jean->signForm(*tree);
                    jean->executeForm(*tree);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *tree << std::endl;
                    jean->signForm(*tree);
                    jean->executeForm(*tree);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *tree << std::endl;
                    jean->signForm(*tree);
                    jean->executeForm(*tree);
                    std::cout << "\n\033[31mjean += 7\033[37m" << std::endl;
                    for (int i = 0; i < 7; ++i)
                        jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *tree << std::endl;
                    jean->executeForm(*tree);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *tree << std::endl;
                    jean->executeForm(*tree);
                    delete jean;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    delete jean;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            delete tree;
        }
    }

    std::cout << "\n\033[33mPARTIE AVEC ROBOT_REQUEST_FORM\n\033[37m" << std::endl;
    
    {
        Intern intern2(intern);
        Form *r2d2 = intern2.makeForm("RobotomyRequestForm", "R2D2");
        std::cout << std::endl;
        if (r2d2)
        {
            try
            {
                jean = new Bureaucrat("jean", 73);
                try
                {
                    std::cout << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->signForm(*r2d2);
                    jean->executeForm(*r2d2);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->signForm(*r2d2);
                    jean->executeForm(*r2d2);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->signForm(*r2d2);
                    jean->executeForm(*r2d2);
                    std::cout << "\n\033[31mjean += 26\033[37m" << std::endl;
                    for (int i = 0; i < 26; ++i)
                        jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *r2d2 << std::endl;
                    jean->executeForm(*r2d2);
                    delete jean;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    delete jean;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            delete r2d2;
        }
    }

    std::cout << "\n\033[33mPARTIE AVEC PRESIDENTIAL_PARDON_FORM\n\033[37m" << std::endl;

    {
        Intern intern3 = intern;
        Form *pardonForm = intern3.makeForm("PresidentialPardonForm", "ROBERT");
        std::cout << std::endl;
        if (pardonForm)
        {
            try
            {
                jean = new Bureaucrat("jean", 26);
                try
                {
                    std::cout << *jean << std::endl;
                    std::cout << *pardonForm << std::endl;
                    jean->signForm(*pardonForm);
                    jean->executeForm(*pardonForm);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *pardonForm << std::endl;
                    jean->signForm(*pardonForm);
                    jean->executeForm(*pardonForm);
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *pardonForm << std::endl;
                    jean->signForm(*pardonForm);
                    jean->executeForm(*pardonForm);
                    std::cout << "\n\033[31mjean += 19\033[37m" << std::endl;
                    for (int i = 0; i < 19; ++i)
                        jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *pardonForm << std::endl;
                    jean->executeForm(*pardonForm);
                    std::cout << "\n\033[31mjean++\033[37m" << std::endl;
                    jean->up();
                    std::cout << "\n" << *jean << std::endl;
                    std::cout << *pardonForm << std::endl;
                    jean->executeForm(*pardonForm);
                    
                    delete jean;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    delete jean;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            delete pardonForm;
        }
    }
    return 0;
}
