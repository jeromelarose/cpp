/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:53:42 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:53:44 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    std::cout << "\n\033[33mTEST\n\033[37m" << std::endl;

    Bureaucrat *b;
    try
    {
        b = new Bureaucrat("jean", 140);
        std::cout << *b << std::endl;
        try
        {
            for (int i = 0; i < 10; ++i)
            {
                b->down();
                std::cout << *b << std::endl;
            }
            for (int i = 0; i < 19; ++i)
            {
                b->up();
                std::cout << *b << std::endl;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            delete b;
            return -1;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    std::cout << "\n\033[33mCOPIE\n\033[37m" << std::endl;
    std::cout << *b << std::endl;
    Bureaucrat copy(*b);
    std::cout << "copy: " << copy << std::endl;
    Bureaucrat assi = copy;
    std::cout << "assi: " << assi << std::endl;
    std::cout << "\n\033[31mjean ne change pas, copy perd 1 niveau et assi prend un niveau\n\033[37m" << std::endl;

    std::cout << *b << std::endl;

    try
    {
        copy.down();
        std::cout << "copy: " << copy << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        assi.up();
        std::cout << "assi: " << assi << std::endl;    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;

    delete b;
    
    return 0;
}
