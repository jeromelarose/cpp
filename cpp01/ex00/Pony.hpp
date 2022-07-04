/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:48:07 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:48:12 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
    public:

    Pony(std::string const name, std::string const type)
    : m_name(name), m_type(type){}

    void    run() const;
    void    jump() const;

    private:

    std::string m_name;
    std::string m_type;
};

#endif
