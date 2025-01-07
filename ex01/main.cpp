/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 12:55:33 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(int argc, char **argv)
{
	int N = 10;
	if (argc != 2)
	{
		std::cout<<"provide just 1 name please"<<std::endl;
		return 1;
	}
	Zombie* theHorde = zombieHorde(N, argv[1]);
	if (theHorde == nullptr)
		return 1;
	for (int i = 0; i < N; i++)
		theHorde[i].announce();
	std::cout<<"checking first pointer, starts at 0 "<<theHorde->getName()<<std::endl;
	delete[] theHorde;
	return 0;
}


