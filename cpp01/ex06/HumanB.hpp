/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:54:25 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:54:27 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    public:

    HumanB(std::string name);

    void    setWeapon(Weapon &weapon);

    void     attack() const;

    private:

    Weapon              *m_weapon;
    std::string const   m_name;

};

#endif
