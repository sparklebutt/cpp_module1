/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:12:35 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : m_name("no name") { Weapon fists = Weapon("fists"); m_weapon = &fists; } 

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(&weapon) {}

HumanA::~HumanA() { }

void    HumanA::attack() { std::cout<<m_name<<" attacks with "<<m_weapon->getType()<<std::endl; }