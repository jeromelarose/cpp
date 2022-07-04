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

int     main()
{
    srand(clock());
    Bureaucrat              *jean;

    std::cout << "\n\033[33mPARTIE AVEC SHRUBERRY_CREATION_FORM\n\033[37m" << std::endl;

    {
        ShrubberyCreationForm *tree = new ShrubberyCreationForm("tree");
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
        std::cout << "\n\033[31mtree2 = tree par constructeur de copy\033[37m" << std::endl;
        ShrubberyCreationForm tree2(*tree);
         std::cout << "tree2: " << tree2 << std::endl;
        std::cout << "\n\033[31mtree3 = tree par assignation\033[37m" << std::endl;
        ShrubberyCreationForm tree3 = *tree;
        std::cout << "tree3: " << tree3 << std::endl;
        delete tree;
    }

    std::cout << "\n\033[33mPARTIE AVEC ROBOT_REQUEST_FORM\n\033[37m" << std::endl;
    
    {
        Form *r2d2 = new RobotomyRequestForm("R2D2");
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

    std::cout << "\n\033[33mPARTIE AVEC PRESIDENTIAL_PARDON_FORM\n\033[37m" << std::endl;

    {
        PresidentialPardonForm  *pardonForm = new PresidentialPardonForm("bob");
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
        std::cout << "\n\033[31mpardon2 = pardonform par constructeur de copy\033[37m" << std::endl;
        PresidentialPardonForm pardon2(*pardonForm);
         std::cout << "pardon2: " << pardon2 << std::endl;
        std::cout << "\n\033[31mpardon3 = pardonform par assignation\033[37m" << std::endl;
        PresidentialPardonForm pardon3 = *pardonForm;
        std::cout << "pardon3: " << pardon3 << std::endl;
        delete pardonForm;
    }
    std::cout << std::endl;
    return 0;
}
