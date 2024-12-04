/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:16:50 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {std::cout<<"human a created"<<std::endl;}

HumanB::HumanB(std::string name) : m_name(name), m_weapon(nullptr) { }

HumanB::~HumanB() { }

void    HumanB::setName(std::string name) { m_name = name; }

void    HumanB::setWeapon(Weapon& weapon) { m_weapon = &weapon; }

void    HumanB::attack()
{ 
    if (m_weapon == nullptr)
        std::cout<<m_name<<" attacks with no weapons "<<std::endl;
    else
        std::cout<<m_name<<" attacks with "<<m_weapon->getType()<<std::endl;
}