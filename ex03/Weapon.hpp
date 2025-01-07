/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 14:27:11 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

class Weapon
{
    private:
        std::string m_type;
    public:
        Weapon();
        Weapon(std::string weaponFlavour);
        ~Weapon();
        void setType(std::string theType);
        const std::string& getType();
};

// setting up the globalvaraible as humanA needs a default weapon
extern Weapon defaultWeapon;