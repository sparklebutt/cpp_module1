/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 14:26:43 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

/**
 * Weapon is a pointer so it can take a weapon object, weapon is set to nullptr
 * to represent empty hands which we account for in the attack() function. Using a ptr 
 * here allows for flexability meaning that humanB can be without weapon
 */
class HumanB
{
	private:
		std::string m_name;
		Weapon* m_weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};