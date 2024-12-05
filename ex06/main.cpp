/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:12:55 by shaboom           #+#    #+#             */
/*   Updated: 2024/12/05 15:12:57 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr<<"we need an error level"<<std::endl;
		return 1;
	}
	Harl errorredirect;	
	errorredirect.complain(argv[1]);
	return 0; 
}