/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:34:35 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:34:40 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------------------------------------------------------
//          CONSTRUCTEUR
//---------------------------------------------------------------

    Fixed::Fixed() : m_point(0)
    {
        std::cout << "Default constructor called" << std::endl;
    }

//---------------------------------------------------------------
//          CONSTRUCTEUR DE COPY
//---------------------------------------------------------------

    Fixed::Fixed(Fixed const &copy)
    {
        std::cout << "Copy constructor called" << std::endl;
        if (this != &copy)
            *this = copy;
    }

//---------------------------------------------------------------
//          DESTRUCTEUR
//---------------------------------------------------------------

    Fixed::~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }

//---------------------------------------------------------------
//          ACCESSEURS
//---------------------------------------------------------------

    int Fixed::getRawBits(void) const
    {
        std::cout << "getRawBits member function called" << std::endl;
        return (m_point);
    }

    void Fixed::setRawBits(int const raw)
    {
        std::cout << "setRawBits member function called" << std::endl;
        m_point = raw;
    }

//---------------------------------------------------------------
//          OPERATEUR D'ASSIGNATION
//---------------------------------------------------------------

    Fixed &Fixed::operator=(Fixed const &copy)
    {
        std::cout << "Assignation operator called" << std::endl;
        if (this != &copy)
            m_point = copy.getRawBits();
        return (*this);
    }
