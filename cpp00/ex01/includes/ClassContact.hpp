/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:17:01 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:17:03 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class contact
{
    public:

    contact(std::string firstName = "none") : m_firstName(firstName){}

    void    add(std::string firstName, std::string lastName, std::string nickName,
    std::string login, std::string address, std::string email, std::string favoriteMeal,
    std::string underwearColor, std::string darkestSecret, std::string phoneNumber, std::string birthdayDate);

    void    print(int i) const;
    void    print_contact() const;

    private:

    void    print_at(std::string at, int i) const;

    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_login;
    std::string m_address;
    std::string m_email;
    std::string m_favoriteMeal; 
    std::string m_underwearColor;
    std::string m_darkestSecret;
    std::string m_phoneNumber;
    std::string m_birthdayDate;
};

#endif
