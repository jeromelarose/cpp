/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassRep.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:16:36 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:16:40 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClassRep.hpp"

//AJOUTE UN CONTACT AU REPERTOIRE EN DEMANDENT LES INFO DU CONTACT
void repertoire::add()
{
    if (nbContact >= 8)
        std::cout << "  \033[31m::::::::::CONTACT 8/8. PLUS DE PLACE DISPONIBLE::::::::::\033[39m" << std::endl;
    else
    {
        std::string firstName, lastName, nickName, login, address, email, favoriteMeal,
        underwearColor, darkestSecret, phoneNumber, birthdayDate;
        //verification de remplire le prenom
        while (!firstName.size())
        {
            std::cout << "Quel est ton prenom ?  :  ";
            std::getline(std::cin, firstName);   
        }
        //verification de remplire le nom
        while (!lastName.size())
        {
            std::cout << "Quel est ton nom ?  :  ";
            std::getline(std::cin, lastName);
        }
        std::cout << "Quel est ton surnom ?  :  ";
        std::getline(std::cin, nickName);
        std::cout << "Quel est ton login ?  :  ";
        std::getline(std::cin, login);
        int digit(1);
        //verification d'avoir 10 chiffre
        while (digit)
        {
            std::cout << "Quel est ton numero de telephone ?  :  ";
            std::getline(std::cin, phoneNumber);
            if (phoneNumber.size() != 10)
                continue;
            for (int i = 0; i < phoneNumber.size(); ++i)
                if ((digit = !std::isdigit(phoneNumber[i])))
                    break ;
        }
        std::cout << "Quel est ton adress ?  :  ";
        std::getline(std::cin, address);
        std::cout << "Quel est ton email ?  :  ";
        std::getline(std::cin, email);
        std::cout << "Quel est ta date d'anniversaire ?  :  ";
        std::getline(std::cin, birthdayDate);
        std::cout << "Quel est ton plat favori ?  :  ";
        std::getline(std::cin, favoriteMeal);
        std::cout << "Quel est ta couleur de sous-vetement ?  :  ";
        std::getline(std::cin, underwearColor);
        std::cout << "Quel est ton plus sombre secret ?  :  ";
        std::getline(std::cin, darkestSecret);
        tab[nbContact].add(firstName, lastName, nickName, login, address, email, favoriteMeal,
        underwearColor, darkestSecret, phoneNumber, birthdayDate);
        nbContact++;
    }
}
//AFFICHE LE REPERTOIRE
void    repertoire::print()
{
    int v = 1;
    while (v)
    {
        v = 0;
        std::cout << "\n     index|    prenom|       nom|    pseudo\033[49m" << std::endl;
        for (int i = 0; i < nbContact; ++i)
            tab[i].print(i + 1);
        if (nbContact)
            std::cout << std::endl;
        if (nbContact > 0)
        {
            std::cout << "Entree l'index du contact que vous souhaitez afficher ou [EXIT] pour quitter la recherche :  ";
            std::string index;
            std::getline(std::cin, index);
            if (!index.compare("1") && nbContact >= 1)
                tab[0].print_contact();
            else if (!index.compare("2") && nbContact >= 2)
                tab[1].print_contact();
            else if (!index.compare("3") && nbContact >= 3)
                tab[2].print_contact();
            else if (!index.compare("4") && nbContact >= 4)
                tab[3].print_contact();
            else if (!index.compare("5") && nbContact >= 5)
                tab[4].print_contact();
            else if (!index.compare("6") && nbContact >= 6)
                tab[5].print_contact();
            else if (!index.compare("7") && nbContact >= 7)
                tab[6].print_contact();
            else if (!index.compare("8") && nbContact == 8)
                tab[7].print_contact();
            else if (!index.compare("EXIT"))
            {
                std::cout << std::endl;
                break ;
            }
            else
                v = 1;
        }
    }       
}
