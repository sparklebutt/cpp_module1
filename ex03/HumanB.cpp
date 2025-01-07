/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 14:20:33 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {std::cout<<"human a created"<<std::endl;}

HumanB::HumanB(std::string name) : m_name(name), m_weapon(nullptr) { }

HumanB::~HumanB() { }

void	HumanB::setName(std::string name) { m_name = name; }

void	HumanB::setWeapon(Weapon& weapon) { m_weapon = &weapon; }

void	HumanB::attack()
{ 
	if (m_weapon == nullptr)
		std::cout<<m_name<<"does not have a weapon "<<std::endl;
	else
		std::cout<<m_name<<" attacks with their weapon "<<m_weapon->getType()<<std::endl;
}