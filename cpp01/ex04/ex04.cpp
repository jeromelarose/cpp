/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:52:29 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:52:31 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p_str = &str;
    std::string &r_str = str;

    std::cout << "string: " << str << std::endl;
    std::cout << "pointeur: " << *p_str << std::endl;
    std::cout << "reference: " << r_str << std::endl;
    return (0);
}
