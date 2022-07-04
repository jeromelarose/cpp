/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:01:32 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/03 09:01:54 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    std::cout << "\033[33mPARTIE SUJET\033[37m\n" << std::endl;
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    std::cout << std::endl;

    std::cout << "\033[33mPARTIE TEST\033[37m\n" << std::endl;

    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << std::endl;
    std::cout << "\033[31mjim2 = jim par constructeur de copie\033[37m\n" << std::endl;
    Victim jim2 = jim;
    std::cout << std::endl;
    std::cout << "original: je m'appele " + jim.get_name() << std::endl;
    std::cout << "jim2: je m'appele " + jim2.get_name() << std::endl;
    std::cout << std::endl;
    std::cout << "\033[31mjoe2 = joe par assignation\033[37m\n" << std::endl;
    Peon joe2(joe);
    std::cout << std::endl;
    std::cout << "original: je m'appele " + joe.get_name() << std::endl;
    std::cout << "joe2: je m'appele " + joe2.get_name() << std::endl;
    std::cout << std::endl;
    robert.polymorph(jim2);
    robert.polymorph(joe2);
    std::cout << std::endl;
    return 0;
}
