/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:34:47 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 13:34:49 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    public:

//---------------------------------------------------------------
//          CONSTRUCTEUR
//---------------------------------------------------------------

    Fixed();

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

//---------------------------------------------------------------
//          OPERATEUR D'ASSIGNATION
//---------------------------------------------------------------

    Fixed &operator=(Fixed const &copy);

    private:

    int     m_point;
    static  const int m_nbBit = 8;
};

#endif
