/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:37:31 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:37:33 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "\033[31m\nPARTIE DU SUJET\n\033[37m" << std::endl;
    {
        Fixed a;
        Fixed const b(Fixed(5.05f) * Fixed(2));
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max(a, b) << std::endl;
    }

    std::cout << "\033[31m\nPARTIE PERSONEL\033[37m" << std::endl;
 
    Fixed a(5);
    Fixed b(49);
    Fixed c(b);

    std::cout << "\033[35m\nPARTIE INCREMENTATION\n\033[37m" << std::endl;
    std::cout << "A = " << a << " et C = " << c << std::endl;
    std::cout << "++A = " << ++a << " et C++ = " << c++ << std::endl;
    std::cout << "A = " << a << " et C = " << c << std::endl;
    std::cout << "A-- = " << a-- << " et --C = " << --c << std::endl;
    std::cout << "A = " << a << " et C = " << c << std::endl;

    std::cout << "\033[35m\nPARTIE COMPARAISONS\n\033[37m" << std::endl;
    if (a < c)
        std::cout << a << " < " << c << std::endl;
    else
        std::cout << a << " >= " << c << std::endl;
    if (a > c)
        std::cout << a << " > " << c << std::endl;
    else
        std::cout << a << " <= " << c << std::endl;
    if (a == c)
        std::cout << a << " == " << c << std::endl;
    else
        std::cout << a << " != " << c << std::endl;
    if (a != c)
        std::cout << a << " != " << c << std::endl;
    else
        std::cout << a << " == " << c << std::endl;
    if (a <= c)
        std::cout << a << " <= " << c << std::endl;
    else
        std::cout << a << " > " << c << std::endl;
    if (a >= c)
        std::cout << a << " >= " << c << std::endl;
    else
        std::cout << a << " < " << c << std::endl;

    std::cout << "\033[35m\nPARTIE MATHEMATIQUE\n\033[37m" << std::endl;
    std::cout << a << " + " << c << " = " << a + c << std::endl;
    std::cout << a << " - " << c << " = " << a - c << std::endl;
    std::cout << a << " * " << c << " = " << a * c << std::endl;
    std::cout << a << " / " << c << " = " << a / c << std::endl;

    std::cout << "\033[35m\nPARTIE MIN ET MAX\n\033[37m" << std::endl;
    std::cout << "le plus petit est: " << min(a, c) << std::endl;
    std::cout << "le plus grand est: " << max(a, c) << std::endl;
}
