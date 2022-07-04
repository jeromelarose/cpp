/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:58:54 by jelarose          #+#    #+#             */
/*   Updated: 2020/12/08 17:57:06 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct Data 
{
    std::string s1;
    int n;
    std::string s2; 
};

void    *serialize(void)
{
    char *ret = new char[16 + (sizeof(int) / sizeof(char))];
    char alphaNum[] = "0123456789abcdefghijklmnopqrstuwxyz";

    for (int i = 0; i < 8; i++)
        ret[i] = alphaNum[std::rand() % 35];

    *reinterpret_cast<int*>(ret + 8) = std::rand() % 100;

    for (size_t i = 8 + sizeof(int); i < 16 + sizeof(int); i++)
        ret[i] = alphaNum[std::rand() % 35];


    return ((void*)ret);
}

Data    *deserialize(void * raw)
{
    Data *data = new Data;
    char *d = reinterpret_cast<char*>(raw);
    data->s1 = std::string(d, 8);
    data->n = *reinterpret_cast<int*>(d + 8);
    data->s2 = std::string(reinterpret_cast<char*>(d + 8 + sizeof(int)), 8);
    return (data);
}

int     main()
{
    std::srand(clock());
    void *raw = serialize();
    Data *data = deserialize(raw);
    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;
    delete data;
    delete reinterpret_cast<char*>(raw);
    return (0);
}
