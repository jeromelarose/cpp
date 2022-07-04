/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassRep.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <jelarose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:17:09 by jelarose          #+#    #+#             */
/*   Updated: 2020/11/28 09:17:12 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSREP_HPP
#define CLASSREP_HPP

#include "../includes/ClassContact.hpp"

class repertoire
{
    public:

    repertoire() : nbContact(0){}

    void    add();
    void    print();

    private:

    contact tab[8];
    int     nbContact;
};

#endif
