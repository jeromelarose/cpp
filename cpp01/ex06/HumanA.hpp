/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:54:07 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:54:09 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    public:

    HumanA(std::string name, Weapon &weapon);

    void     attack() const;

    private:

    Weapon              &m_weapon;
    std::string const   m_name;

};

#endif
