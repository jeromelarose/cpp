/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:34:55 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:34:57 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "\033[31m\nPARTIE DU SUJET\n\033[37m" << std::endl;
    {   
        Fixed a;
        Fixed b(a);
        Fixed c;
        c = a;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    std::cout << "\033[31m\nPARTIE TEST\n\033[37m" << std::endl;

    Fixed a;
    a.setRawBits(42);
    Fixed b(a);
    Fixed c;
    c = a;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
