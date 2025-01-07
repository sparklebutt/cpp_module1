/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 12:52:48 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @param N the number of zombies in the horde we want
 * @param name the name of the zombie in the horde, they will all have the same name 
 * but a number will be attatched, based on the iterator for better clarity in visualising
 * the result
 * @return the horde if sucsesfull and complete or a nullptr for error handling in main
 * 
 * this function does not need to throw since the error possibilities are very simple,
 * handling errors using throw only add uneccisary complication to the code.
 */
Zombie* zombieHorde( int N, std::string name )
{
	Zombie* theHorde = nullptr;
	try
	{
		Zombie* theHorde = new Zombie[N];
		for (int i = 0; i < N; i++)
			theHorde[i].setName(name + std::to_string(i));
		return theHorde;
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr<<"Error: allocation failed : "<< e.what()<<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr<<"Error of unkown origin : "<< e.what()<<std::endl;
		delete[] theHorde;
	}
	return nullptr;
}