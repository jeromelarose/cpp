/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:16:24 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:16:28 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../includes/ClassContact.hpp"

void    contact::add(std::string firstName, std::string lastName, std::string nickName,
std::string login, std::string address, std::string email, std::string favoriteMeal,
std::string underwearColor, std::string darkestSecret, std::string phoneNumber, std::string birthdayDate)
{
    m_firstName = firstName;   
    m_lastName = lastName;
    m_nickName = nickName;
    m_login = login;
    m_address = address;
    m_email = email;
    m_favoriteMeal = favoriteMeal;
    m_underwearColor = underwearColor;
    m_darkestSecret = darkestSecret;
    m_phoneNumber = phoneNumber;
    m_birthdayDate = birthdayDate;
}

void    contact::print(int i) const
{
    std::cout << "" << std::setw(10) << i << "|";
    print_at(m_firstName, 1);
    print_at(m_lastName, 1);
    print_at(m_nickName, 0);
    std::cout << "" << std::endl;
}

void    contact::print_contact() const
{
    std::cout << "\n  \033[32m::::::::::CONTACT SELECTIONNER::::::::::\n\033[39m" << std::endl;
    std::cout << std::setw(24) << "Premom" << ":    " << m_firstName << "\n"
    << std::setw(24) << "Nom" << ":    " << m_lastName << "\n"
    << std::setw(24) << "Surnom" << ":    " << m_nickName << "\n"
    << std::setw(24) << "Login" << ":    " << m_login << std::endl;
    std::cout << std::setw(24) << "Tel" << ":    " << m_phoneNumber << "\n"
    << std::setw(24) << "Addresse" << ":    " << m_address << "\n"
    << std::setw(24) << "Mail" << ":    " << m_email << "\n"
    << std::setw(24) << "Date d'anniversaire" << ":    " << m_birthdayDate << "\n"
    << std::setw(24) << "Plat favori" << ":    " << m_favoriteMeal << "\n"
    << std::setw(24) << "Couleur de sous-vetement" << ":    " << m_underwearColor << "\n"
    << std::setw(24) << "Secret le plus sombre" << ":    " << m_darkestSecret << "" << std::endl;
}

void    contact::print_at(std::string at, int i) const
{
    if (at.size() < 11)
        std::cout << std::setw(10) << at;
    else
    {
        for (int y = 0; y < 9; ++y)
            std::cout << (char)at.at(y);
        std::cout << ".";
    }
    if (i)
        std::cout << "|";
}
