/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:47:49 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:48:00 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    Pony::run() const
{
    std::cout << "Je suis " << m_name << " de type " << m_type
    << " et je cours" << std::endl;
}
void    Pony::jump() const
{
    std::cout << "Je suis " << m_name << " de type " << m_type
    << " et je saute" << std::endl;
}
