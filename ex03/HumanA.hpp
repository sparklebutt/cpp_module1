/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:19:54 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

/**
 * m_weapon is a pointer so my automatic constructor can initialize member weapon
 * we then pass the weapon we want by its reference, thus m_weapon contains not a copy,
 * but the actual weapon object we passed to humanA, so any modifications that happen 
 * outside of human a will happen to the weapon object itself.
 * 
 */
class HumanA
{
    private:
        std::string m_name;
        Weapon *m_weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};