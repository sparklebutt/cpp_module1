/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:09:28 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { std::cout<<"creating weapon"<<std::endl;};
Weapon::Weapon(std::string weaponFlavour) { setType(weaponFlavour); }
Weapon::~Weapon() { std::cout<<"destroying:  "<<m_type<<std::endl;};

void Weapon::setType(std::string theType) { m_type = theType; };

const std::string& Weapon::getType() { return m_type; };