/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassType.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:58:23 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/08 17:58:34 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_TYPE_HPP
#define CLASS_TYPE_HPP

#include <sstream>
#include <math.h>
#include <bits/stdc++.h>

#include "Enum.hpp"

class ConvType
{
    
public:

//CONSTRUCTEUR    
    ConvType();

//CONSTRUCTEUR DE COPIE
    ConvType(ConvType const &convType);

//DESTRUCTEUR    
    virtual ~ConvType();

//ACCESSEURS   

//OPERATEUR D'ASSIGNATION
    ConvType &operator=(const ConvType &convType);

//METHODES
    static Ttype        isType(std::string &str);
    static bool                is_convert(std::string s, Ttype type);
    static void         convMe(char val);
    static void         convMe(int val);
    static void         convMe(float val);
    static void         convMe(double val);
    static void         convMe();

private:

//ATTRIBUTS

};

#endif
