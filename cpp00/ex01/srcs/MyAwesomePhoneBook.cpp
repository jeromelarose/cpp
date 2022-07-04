/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:16:47 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:16:50 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../includes/ClassContact.hpp"
#include "../includes/ClassRep.hpp"
#include <stdlib.h>

int     main()
{
    repertoire rep;
    while (1)
    {
        std::string cmd;
        std::cout << "\n  \033[32m::::::::::LISTE DES COMMANDES DISPONIBLE::::::::::\033[37m\n";
        std::cout << "" << std::endl;
        std::cout <<"[ADD]       pour ajouter un contact" << std::endl;
        std::cout << "[SEARCH]    pour rechercher un contact" << std::endl;
        std::cout << "[EXIT]      pour quitter le programme" << std::endl;
        std::cout << "\n    Entre ta commande:  ";
        getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
        {
            std::cout << "\n  \033[32m::::::::::AJOUT D'UN CONTACT::::::::::\033[37m\n" << std::endl;
            rep.add();
        }
        else if (!cmd.compare("SEARCH"))
        {
            std::cout << "\n  \033[32m::::::::::LISTE DES CONTACTS::::::::::\033[37m" << std::endl;
            rep.print();
        }
        else if (!cmd.compare("EXIT"))
        {
            break ;
        }
        else
            std::cout << "\n  \033[31m::::::::::COMMANDE NON DISPONIBLE::::::::::\033[37m";
    }
    return (0);
}
