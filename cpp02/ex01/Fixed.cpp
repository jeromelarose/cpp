/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:36:17 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:36:19 by jelarose         ###   ########.fr       */
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

    Fixed::Fixed(int const point)
    {
        std::cout << "int constructor called" << std::endl;
        m_point = point << m_nbBit;
    }

    Fixed::Fixed(float const point)
    {
        std::cout << "float constructor called" << std::endl;
        m_point = roundf(point * (1 << m_nbBit));
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
//          DESTRUCTEURS
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

    Fixed &Fixed::operator=(const Fixed &copy)
    {
        std::cout << "Assignation operator called" << std::endl;
        if (this != &copy)
            m_point = copy.getRawBits();
        return (*this);
    }

//---------------------------------------------------------------
//          METHODES
//---------------------------------------------------------------

    float Fixed::toFloat(void) const
    {
        // std::cout << "toFloat called" << std::endl;
        return ((float)m_point / (float)(1 << m_nbBit));
    }

    int Fixed::toInt(void) const
    {
        //std::cout << "toInt called" << std::endl;
        return (m_point >> m_nbBit);
    }

//---------------------------------------------------------------
//          FONCTIONS
//---------------------------------------------------------------

    std::ostream &operator<<(std::ostream &stream, Fixed const &obj)
    {
        // std::cout << "operator<<() called" << std::endl;
        stream << obj.toFloat();
        return (stream);
    }
