/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2024/12/02 13:16:51 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie:: ~Zombie()  
{
    if (!getName().empty())
    std::cout<<getName()<<" HAS BEEN DESTROYED"<<std::endl;
}

void Zombie::setName( const std::string& name ) { m_name = name; }

std::string Zombie::getName( ) { return m_name; }

void Zombie::announce()
{
    std::cout<<getName()<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}