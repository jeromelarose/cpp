/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:54:47 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:54:48 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    public:

    Weapon(std::string type = "NONE");

    void                    setType(std::string type);
    std::string     const   &getType() const;

    private:

    std::string     m_type;
};

#endif
