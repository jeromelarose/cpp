/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:55:27 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 11:55:29 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int     main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Probleme d'argument [NOM DU FICHIER] [CHAINE A REMPLACER] [CHAINE DE REMPLACEMENT]" << std::endl;
        return (0);
    }
    if (!*av[1] || !*av[2] || !*av[3])
     {
        std::cout << "Probleme au moin 1 argument est vide une chaine vide" << std::endl;
        return (0);
    }
    std::string name_file = av[1];
    name_file += ".replace";
    std::ifstream file(av[1]);
    std::ofstream file2(name_file);
    std::string line;
    std::string find = av[2];
    while (std::getline(file, line))
    {
        while (line.find(av[2]) < line.size())
            line.replace(line.find(av[2]), find.size(), av[3]);
        file2 << line << std::endl;
    }
    file.close();
    file2.close();
    return (0);
}
