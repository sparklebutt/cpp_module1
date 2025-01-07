/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 12:12:53 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief 
 * newZombie fucntion is outside of the Zombie class and therefore does not have
 * direct access to private members of the class, therefor a setter is required.
 * The setter is a public memeber function therefore has access to private memebrs inside
 * Zombie class.
 * 
 * @return returns a pointer to the new object created on the heap(malloced)
 */

Zombie* newZombie( std::string name )
{
	Zombie* deadDude = new Zombie();
	deadDude->setName(name);
	return (deadDude);
}