/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2024/12/02 13:16:43 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
    return 0;
	
}


