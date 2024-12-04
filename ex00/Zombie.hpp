/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:50:23 by araveala          #+#    #+#             */
/*   Updated: 2024/12/02 14:45:13 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string m_name;
    public:
        Zombie();
        ~Zombie();
        std::string getName();
        void setName( const std::string& name );
        
        void    announce( void );
        void    randomChump( std::string name );
};
Zombie* newZombie( std::string name );
