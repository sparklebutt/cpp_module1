/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:41 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 11:44:25 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(int argc, char **argv)
{
    int N = 100;
    if (argc != 2)
    {
        std::cout<<"provide just name please"<<std::endl;
        return 1;
    }
    Zombie* theHorde = zombieHorde(N, argv[1]);
    if (theHorde == nullptr)
        return 1;
    for (int i = 0; i < N; i++)
        theHorde[i].announce();
    delete[] theHorde;
    return 0;
}


