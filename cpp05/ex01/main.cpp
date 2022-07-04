/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:54:51 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:54:52 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    std::cout << "\n\033[33mTEST\n\033[37m" << std::endl;

    Bureaucrat  *jean;
    Form        *b28;
    int         grade = 100 ;

    try
    {
        jean = new Bureaucrat("jean", 101);
        try
        {
            b28 = new Form("b28", grade, 100);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            delete jean;
            return (-1);
        }
        std::cout << *jean << std::endl;
        std::cout << *b28 << std::endl;
        jean->signForm(*b28);
        std::cout << "\n\033[35mJean++\033[37m" << std::endl;
        jean->up();
        std::cout << "\n" << *jean << std::endl;
        std::cout << *b28 << std::endl;
        jean->signForm(*b28);
        std::cout << "\n" << *jean << std::endl;
        std::cout << *b28 << std::endl;
        jean->signForm(*b28);
        std::cout << "\n" << *jean << std::endl;
        std::cout << *b28 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (-1);
    }

    std::cout << "\n\033[31mbob = jean par constructeur de copy\033[37m" << std::endl;
    Bureaucrat bob(*jean);
    std::cout << "bob: " << bob << std::endl;

    std::cout << "\n\033[31mbob2 = jean par assignation\033[37m" << std::endl;
    Bureaucrat bob2 = *jean;
    std::cout << "bob2: " << bob2 << std::endl;

    std::cout << "\n\033[31mb29 = b28 par constructeur de copy\033[37m" << std::endl;
    Form b29(*b28);
    std::cout << "b29: " << b29 << std::endl;

    std::cout << "\n\033[31mb30 = b28 par assignation\033[37m" << std::endl;
    Form b30 = *b28;
    std::cout << "b30: " << b30 << std::endl << std::endl;

    delete jean;
    delete b28;

    return 0;
}
