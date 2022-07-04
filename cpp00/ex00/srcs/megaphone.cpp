/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:14:24 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:14:31 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        for (int i = 1; i < ac; ++i)
        {
            std::string str = av[i];
            for (std::size_t y = 0; y < str.size(); ++y)
                std::cout << (char)std::toupper(str.at(y));
        }
    }
    std::cout << std::endl;
    return (0);
}
