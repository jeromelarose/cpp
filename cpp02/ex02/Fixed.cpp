/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:37:18 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:37:20 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------------------------------------------------------
//          CONSTRUCTEURS
//---------------------------------------------------------------

    Fixed::Fixed() : m_point(0)
    {
        // std::cout << "Default constructor called" << std::endl;
    }

    Fixed::Fixed(int const point)
    {
        // std::cout << "int constructor called" << std::endl;
        this->setRawBits(point << m_nbBit);
    }

    Fixed::Fixed(float const point)
    {
        // std::cout << "float constructor called" << std::endl;
        this->setRawBits(roundf(point * (1 << m_nbBit)));
    }

//---------------------------------------------------------------
//          CONSTRUCTEUR DE COPY
//---------------------------------------------------------------

    Fixed::Fixed(Fixed const &copy)
    {
        //std::cout << "Copy constructor called" << std::endl;
        if (this != &copy)
            *this = copy;
    }

//---------------------------------------------------------------
//          DESTRUCTEURS
//---------------------------------------------------------------

    Fixed::~Fixed()
    {
        // std::cout << "Destructor called" << std::endl;
    }

//---------------------------------------------------------------
//          ACCESSEURS
//---------------------------------------------------------------

    int Fixed::getRawBits(void) const
    {
        //std::cout << "getRawBits member function called" << std::endl;
        return (m_point);
    }

    void Fixed::setRawBits(int const raw)
    {
        //std::cout << "setRawBits member function called" << std::endl;
        m_point = raw;
    }

    void Fixed::setRawBits(float const raw)
    {
        //std::cout << "setRawBits member function called" << std::endl;
        m_point = raw;
    }

//---------------------------------------------------------------
//          OPERATEURS D'ASSIGNATION
//---------------------------------------------------------------

    Fixed &Fixed::operator=(const Fixed &copy)
    {
        // std::cout << "Assignation operator called" << std::endl;
        if (this != &copy)
            this->setRawBits(copy.getRawBits());
        return (*this);
    }

//---------------------------------------------------------------
//          OPERATEURS DE COMPARAISONS
//---------------------------------------------------------------

    bool Fixed::operator<(Fixed const &obj) const
    {
        return (this->getRawBits() < obj.getRawBits());
    }

    bool Fixed::operator>(Fixed const &obj) const
    {
        return (this->getRawBits() > obj.getRawBits());
    }

    bool Fixed::operator==(Fixed const &obj) const
    {
        return (this->getRawBits() == obj.getRawBits());
    }

    bool Fixed::operator!=(Fixed const &obj) const
    {
        return (this->getRawBits() != obj.getRawBits());
    }

    bool Fixed::operator<=(Fixed const &obj) const
    {
        return (this->getRawBits() <= obj.getRawBits());
    }

    bool Fixed::operator>=(Fixed const &obj) const
    {
        return (this->getRawBits() >= obj.getRawBits());
    }

//---------------------------------------------------------------
//          OPERATEURS MATHEMATIQUE
//---------------------------------------------------------------

    Fixed Fixed::operator+(Fixed const &obj) const
    {
        //std::cout << std::endl << m_point;
        Fixed ret(*this);
        ret.m_point += obj.m_point;
        return (ret);
    }

    Fixed Fixed::operator-(Fixed const &obj) const
    {
        Fixed ret(*this);
        ret.m_point -= obj.m_point;
        return (ret);
    }

    Fixed Fixed::operator*(Fixed const &obj) const
    {
        Fixed ret;
        ret.m_point = (this->toFloat() * obj.toFloat()) * (1 << m_nbBit);
        return (ret);
    }

    Fixed Fixed::operator/(Fixed const &obj) const
    {
        Fixed ret;
        ret.m_point =  (this->toFloat() / obj.toFloat()) * (1 << m_nbBit);
        return (ret);
    }

//---------------------------------------------------------------
//          OPERATEURS D'INCREMENTATION
//---------------------------------------------------------------

    Fixed &Fixed::operator++()
    {
        m_point ++;
        return (*this);
    }

    Fixed &Fixed::operator--()
    {
        m_point--;
        return (*this);
    }

    Fixed Fixed::operator++(int)
    {
        Fixed ret = *this;
        ++*this;
        return (ret);
    }

    Fixed Fixed::operator--(int)
    {
        Fixed ret = *this;
        --*this;
        return (ret);
    }

//---------------------------------------------------------------
//          MEHODES
//---------------------------------------------------------------

    float Fixed::toFloat(void) const
    {
        // std::cout << "toFloat called" << std::endl;
        return ((float)(this->getRawBits()) / (float)(1 << m_nbBit));
    }

    int Fixed::toInt(void) const
    {
        //std::cout << "toInt called" << std::endl;
        return (this->getRawBits() >> m_nbBit);
    }

    Fixed  const &Fixed::min(const Fixed &obj, const Fixed &obj2)
    {
        if (obj < obj2)
            return (obj);
        return (obj2);
    }

    Fixed  const &Fixed::max(const Fixed &obj, const Fixed &obj2)
    {
        if (obj > obj2)
            return (obj);
        return (obj2);
    }

//---------------------------------------------------------------
//          FONCTIONS
//---------------------------------------------------------------

    Fixed  const &min(const Fixed &obj, const Fixed &obj2)
    {
        if (obj < obj2)
            return (obj);
        return (obj2);
    }

    Fixed  const &max(const Fixed &obj, const Fixed &obj2)
    {
        if (obj > obj2)
            return (obj);
        return (obj2);
    }

    std::ostream &operator<<(std::ostream &stream, Fixed const &obj)
    {
        // std::cout << "operator<<() called" << std::endl;
        stream << obj.toFloat();
        return (stream);
    }
