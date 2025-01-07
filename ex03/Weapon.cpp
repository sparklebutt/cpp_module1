/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 14:11:51 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { std::cout<<"creating weapon"<<std::endl;};
Weapon::Weapon(std::string weaponFlavour) { setType(weaponFlavour); }
Weapon::~Weapon() { std::cout<<"destroying:  "<<m_type<<std::endl;};

void Weapon::setType(std::string theType) { m_type = theType; };

const std::string& Weapon::getType() { return m_type; };

// global variable for a defined weapopn, so that human a always has a weapon
Weapon defaultWeapon("fists");