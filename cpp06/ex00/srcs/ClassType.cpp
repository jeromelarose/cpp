/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:57:53 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/08 17:58:02 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassType.hpp"

//CONSTRUCTEUR    
    ConvType::ConvType() {};

//CONSTRUCTEUR DE COPIE
    ConvType::ConvType(ConvType const &convType)
    {
        if (this != &convType)
            *this = convType;
    }

//DESTRUCTEUR    
    ConvType::~ConvType()
    {
    }

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    ConvType &ConvType::operator=(const ConvType &convType)
    {
        (void)convType;
        return (*this);
    }

//METHODES
    //return type
    Ttype      ConvType::isType(std::string &str)
    {
        int point = 0;
        long double i = 0;

        if (!str.compare("nan") || !str.compare("nanf") || !str.compare("-inf") || !str.compare("-inff")
        || !str.compare("+ inf") || !str.compare("+ inff"))
            return (tnan);
        if (str.size() == 3 && str.at(0) == '\'' && std::isprint(str.at(1)) && str.at(2) == '\'')
            return (tchar);
        if (str.at(i) == '+' || str.at(i) == '-')
            i++;
        if (!std::isdigit(str.at(i)))
            return (tnull);
        while (i < str.size())
        {
            if (str.at(i) == 'f' && i == str.size() - 1)
                return (tfloat);
            else if (str.at(i) == '.' && point++)
                return (tnull);
            else if (!std::isdigit(str.at(i)) && str.at(i) != '.')
                return (tnull);
            i++;
        }
        if (point == 1)
            return (tdouble);
        return (tint);
    }

    //verification de la convertion du type litteral
    bool    ConvType::is_convert(std::string s, Ttype type)
    {
        std::istringstream ss(s);
        double test;
        ss >> test;
        switch (type)
        {
            case tchar:
                if (test < CHAR_MIN || test > CHAR_MAX)
                    return false;
                return true;
            case tint:
                if (test < INT_MIN || test > INT_MAX)
                    return (false);
                return true;
            case tfloat:
                if (test < -FLT_MAX || test > FLT_MAX)
                    return false;
                return true;
            case tdouble:
                if (test < -DBL_MAX || test > DBL_MAX)
                    return false;
                return true;
            case tnan:
                return true;
            default:
                break;
        }
        return false;
    }

    //converti char type et affiche
    void        ConvType::convMe(char val)
    {
        int     val_int;
        float   val_float;
        double  val_double;

        val_int = 0;
        val_float = 0;
        val_double = 0;

        //gestion dun char
        if (isprint(val))
            std::cout << "char: '" << val << "'" << std::endl;
        else 
            std::cout << "char: Non displayable" << std::endl;

        //gestion du int
        val_int = static_cast<int>(val);
        std::cout << "int: " << val_int << std::endl;
        
        //gestion du float
        val_float = static_cast<float>(val);
        std::cout << "float: " << val_float << ".0f" << std::endl;
        
        //gestion du double
        val_double = static_cast<double>(val);
        std::cout << "double: " << val_double << ".0" << std::endl;
    }

    //converti int type et affiche
    void        ConvType::convMe(int val)
    {
        char    val_char;
        float   val_float;
        double  val_double;

        val_char = 0;
        val_float = 0;
        val_double = 0;

        //gestion dun char
        if (isnan(val) || val < CHAR_MIN || val > CHAR_MAX)
            std::cout << "char: impossible" << std::endl;
        else if (isprint(val))
        {
            val_char = static_cast<char>(val);
            std::cout << "char: '" << val_char << "'" << std::endl;
        }
        else 
            std::cout << "char: Non displayable" << std::endl;

        //gestion du int
        val = static_cast<int>(val);
        std::cout << "int: " << val << std::endl;
        
        //gestion du float
        val_float = static_cast<float>(val);
        float f = 0;
        if (val_float != 0)
        {
            f = val_float;
            if (val_float < 0)
                f *= -1;
            f = f / static_cast<unsigned int>(f);
        }
        std::cout << "float: " << val_float;
        if (f == 1 || val_float == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
        
        //gestion du double
        val_double = static_cast<double>(val);
        double d = 0;
        if (val_double != 0)
        {
            d = val_double;
            if (val_double < 0)
                d *= -1;
            d = d / static_cast<unsigned int>(d);
        }
        std::cout << "double: " << val_double;
        if (d == 1 || val_double == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }

    //converti float type et affiche
     void        ConvType::convMe(float val)
    {
        int     val_int;
        char    val_char;
        double  val_double;

        val_char = 0;
        val_int = 0;
        val_double = 0;

        //gestion dun char
        if (isnan(val) || val < CHAR_MIN || val > CHAR_MAX)
            std::cout << "char: impossible" << std::endl;
        else if (isprint(val))
        {
            val_char = static_cast<char>(val);
            std::cout << "char: '" << val_char << "'" << std::endl;
        }
        else 
            std::cout << "char: Non displayable" << std::endl;

        //gestion du int
        if (isnan(val) || val < INT_MIN || val > INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else
        {
            val_int = static_cast<int>(val);
            std::cout << "int: " << val_int << std::endl;
        }
        
        //gestion du float
        val = static_cast<float>(val);
        float f = 0;
        if (val != 0)
        {
            f = val;
            if (val < 0)
                f *= -1;
            f = f / static_cast<unsigned int>(f);
        }
        std::cout << "float: " << val;
        if (f == 1 || val == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
        
        //gestion du double
        val_double = static_cast<double>(val);
        double d = 0;
        if (val_double != 0)
        {
            d = val_double;
            if (val_double < 0)
                d *= -1;
            d = d / static_cast<unsigned int>(d);
        }
        std::cout << "double: " << val_double;
        if (d == 1 || val_double == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }

    //converti double type et affiche
    void        ConvType::convMe(double val)
    {
        int     val_int;
        char    val_char;
        float   val_float;

        val_char = 0;
        val_int = 0;
        val_float = 0;

        //gestion dun char
        if (isnan(val) || val < CHAR_MIN || val > CHAR_MAX)
            std::cout << "char: impossible" << std::endl;
        else if (isprint(val))
        {
            val_char = static_cast<char>(val);
            std::cout << "char: '" << val_char << "'" << std::endl;
        }
        else 
            std::cout << "char: Non displayable" << std::endl;

        //gestion du int
        if (isnan(val) || val < INT_MIN || val > INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else
        {
            val_int = static_cast<int>(val);
            std::cout << "int: " << val_int << std::endl;
        }
        
        //gestion du float
        if (val < -FLT_MAX || val > FLT_MAX)
            std::cout << "float: impossible" << std::endl;
        else
        {
            val_float = static_cast<float>(val);
            float f = 0;
            if (val_float != 0)
            {
                f = val_float;
                if (val_float < 0)
                    f *= -1;
                f = f / static_cast<unsigned int>(f);
            }
            std::cout << "float: " << val_float;
            if (f == 1 || val_float == 0)
                std::cout << ".0";
            std::cout << "f" << std::endl;
        }
        
        //gestion du double
        val = static_cast<double>(val);
        double d = 0;
        if (val != 0)
        {
            d = val;
            if (val < 0)
                d *= -1;
            d = d / static_cast<unsigned int>(d);
        }
        std::cout << "double: " << val;
        if (d == 1 || val == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }

    //converti double type et affiche
    void        ConvType::convMe()
    {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
    }
