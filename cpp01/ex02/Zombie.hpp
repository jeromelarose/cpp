/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:50:27 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:50:30 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:

    Zombie();
    Zombie(std::string  const name, std::string const type)
    : m_name(name), m_type(type){}

    void    set_name(std::string name);
    void    set_type(std::string type);

    void    advert() const;
    void    announce() const;

    private:

    std::string  m_name;
    std::string  m_type;
};

#endif
