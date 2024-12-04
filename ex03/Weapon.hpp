/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:23:56 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 14:08:20 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

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