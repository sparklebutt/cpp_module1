/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:19:35 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

/**
 * Weapon is a pointer so it can take a weapon object , weapon is set to nullptr
 * to represent empty hands whcih we account ofr in the attack() fucntion
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
        void    setName(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack();
};