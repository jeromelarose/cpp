/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:58:07 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/08 17:58:10 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enum.hpp"
#include "ClassType.hpp"

int     main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "enter a single argument" << std::endl;
        return (0);
    }

    std::string s = av[1];
    Ttype type = ConvType::isType(s);
    if (!ConvType::is_convert(s, type))
    {
        ConvType::convMe();
        return (0);
    }

    std::istringstream ss(s);

    switch (type)
    {
        case tchar:
            char Char;
            Char = s.at(1);
            ConvType::convMe(Char);
            break;
        case tint:
            int Int;
            ss >> Int;
            ConvType::convMe(Int);
            break;
        case tfloat:
            float Float;
            ss >> Float;
            ConvType::convMe(Float);
            break;
        case tdouble:
            double Double;
            ss >> Double;
            ConvType::convMe(Double);
            break;
        case tnan:
            double val;
            val = nan("");
            ConvType::convMe(val);
            break;
        default:
            break;
    }

    return (0);
}
