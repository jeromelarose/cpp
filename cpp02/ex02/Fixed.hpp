/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:37:24 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:37:26 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string.h>
#include <sstream>

class Fixed
{
public:

//---------------------------------------------------------------
//          CONSTRUCTEURS
//---------------------------------------------------------------
   
    Fixed();
    Fixed(int const point);
    Fixed(float const point);

//---------------------------------------------------------------
//          CONSTRUCTEUR DE COPY
//---------------------------------------------------------------

    Fixed(Fixed const &copy);

//---------------------------------------------------------------
//          DESTRUCTEUR
//---------------------------------------------------------------
   
    ~Fixed();

//---------------------------------------------------------------
//          ACCESSEURS
//---------------------------------------------------------------
   
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void setRawBits(float const raw);

//---------------------------------------------------------------
//          OPERATEUR D'ASSIGNATION
//---------------------------------------------------------------
   
    Fixed &operator=(Fixed const &copy);

//---------------------------------------------------------------
//          OPERATEUR DE COMPARAISON
//---------------------------------------------------------------
   
    bool operator<(Fixed const &obj) const;
    bool operator>(Fixed const &obj) const;
    bool operator<=(Fixed const &obj) const;
    bool operator>=(Fixed const &obj) const;
    bool operator==(Fixed const &obj) const;
    bool operator!=(Fixed const &obj) const;

//---------------------------------------------------------------
//          OPERATEUR MATHEMATIQUE
//---------------------------------------------------------------
   
    Fixed operator+(Fixed const &obj) const;
    Fixed operator-(Fixed const &obj) const;
    Fixed operator*(Fixed const &obj) const;
    Fixed operator/(Fixed const &obj) const;

//---------------------------------------------------------------
//          OPERATEUR D'INCREMENTATION
//---------------------------------------------------------------
   
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);

//---------------------------------------------------------------
//          METHODES
//---------------------------------------------------------------
    
    static Fixed  const &min(const Fixed &obj, const Fixed &obj2);
    static Fixed  const &max(const Fixed &obj, const Fixed &obj2);
    float toFloat(void) const;
    int toInt(void) const;

private:

    int m_point;
    static const int m_nbBit = 8;
};

//---------------------------------------------------------------
//          FONCTIONS
//---------------------------------------------------------------

std::ostream &operator<<(std::ostream &stream, Fixed const &obj);
Fixed  const &min(const Fixed &obj, const Fixed &obj2);
Fixed  const &max(const Fixed &obj, const Fixed &obj2);

#endif
