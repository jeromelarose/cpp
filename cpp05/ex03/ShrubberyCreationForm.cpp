/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:56:49 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/02 00:56:52 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//CONSTRUCTEUR    
    ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : Form("ShrubberyCreationForm", 145, 137, target)
    {
    };

//CONSTRUCTEUR DE COPIE
    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm)
    : Form(shrubberyCreationForm)
    {
    }

//DESTRUCTEUR    
    ShrubberyCreationForm::~ShrubberyCreationForm()
    {
    }

//ACCESSEURS

//OPERATEUR D'ASSIGNATION
    ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
    {
        if (this == &shrubberyCreationForm)
        {
            setSigned(shrubberyCreationForm.getIsSigned());
        }
        return (*this);
    }

//METHODES
    void        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
    {
        Form::execute(executor);
        try
        {
            std::ofstream  file(getTarget() + "_shrubbery");
            file << "                                                                     " << std::endl;
            file << "                               xxxxxxxx                              " << std::endl;
            file << "          xxxxx              xxxx/xxx/xxx                            " << std::endl;
            file << "         xxxxxxx           xxxx\\xxx\\xxxxxxx                          " << std::endl;
            file << "        xxxxxxxxx         x\\/xx\\x/xx\\xx/\\x/x                         " << std::endl;
            file << "       xxxxxxxxxxx       xx/xxxx\\x/xx\\/xx/xxx           FF           " << std::endl;
            file << "       xxxxxxxxxxx       xxxx\\xx/xxx/xxxx/xxx          FFFF          " << std::endl;
            file << "       xxxxxxxxxxx        xxx/\\/xx\\/xx/xxx/x         FFFFFFFF        " << std::endl;
            file << "        xxxxxxxxx          x/xx\\xx/\\/x\\/xxx           FFFFFF         " << std::endl;
            file << "         xxxxxxx            xx/x\\/xx\\xx\\xx           FFFFFFFF        " << std::endl;
            file << "           III                xxx\\xx/xxx            FFFFFFFFFF       " << std::endl;
            file << "           III                   HHHH              FFFFFFFFFFFF      " << std::endl;
            file << ",,,,,,,,,,,III,,,,,,,,,,,,,,,,,,,HHHH,,,,,,,,,,,,,,,,FFFFFFFF,,,,,,,," << std::endl;
            file << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,HHHH,,,,,,,,,,,,,,FFFFFFFFFFFF,,,,,," << std::endl;
            file << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,HHHH,,,,,,,,,,,,FFFFFFFFFFFFFFFF,,,," << std::endl;
            file << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,HHHH,,,,,,,,,,,,,,,,,,,mm,,,,,,,,,,," << std::endl;
            file << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,HHHH,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << std::endl;
            file << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << std::endl;
            file.close();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

//METHODES EXCEPTIONS

//OPERATEUR DE FLUX