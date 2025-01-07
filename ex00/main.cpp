/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 12:14:02 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief 
 * Provided a user friendly input method for simple testing.
 * Subject states that newZombie function should give a zombie that is accessible 
 * out of scope, therefore theZombie gets malloced with new, leading to announce is callable
 * outside of function scope.
 * 
 * theChump is an example on how this would work on stack, since its not malloced
 * it can not be announced outside of scope.
 * 
 * @note the last call for theChump.announce() behaves as expected when the object has
 * not been put on to the heap(malloced).
 */

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout<<"provide name1 and name2 please"<<std::endl;
		return 1;
	}
	Zombie theChump;
	Zombie* theZombie = newZombie(argv[1]);
	theZombie->announce();
	delete theZombie;
	theChump.randomChump(argv[2]);
	theChump.announce();
	return 0;
}