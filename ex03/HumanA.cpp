/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 14:13:12 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : m_name("no name"), m_weapon(defaultWeapon) {} // Weapon fists = Weapon("fists"); m_weapon = &fists; 

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon) {}

HumanA::~HumanA() { }

void    HumanA::attack() { std::cout<<m_name<<" attacks with "<<m_weapon.getType()<<std::endl; }