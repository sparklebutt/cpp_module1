/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 12:15:29 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie:: ~Zombie()  { std::cout<<getName()<<" HAS BEEN DESTROYED"<<std::endl; }

void Zombie::setName( const std::string& name ) { m_name = name; }

std::string Zombie::getName( ) { return m_name; }

void Zombie::announce() { std::cout<<getName()<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl; }