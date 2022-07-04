/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:53:18 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:53:20 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string    Human::identify() const
{
   return (m_brain.identify());
}

Brain  const  &Human::getBrain() const
{
    return (m_brain);
}
