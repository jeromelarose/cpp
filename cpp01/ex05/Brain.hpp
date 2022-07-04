/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:53:06 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:53:10 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
    public:

    Brain();

    void        set_age(int age);
    void        set_volume(int volume);
    void        set_qi(int qi);

    int         get_age() const;
    int         get_volume() const;
    int         get_qi() const;

    std::string  identify() const;

    private:

    int     m_age;
    int     m_volume;
    int     m_qi;
};

#endif
