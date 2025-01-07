/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:00:26 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/07 16:27:26 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr<<"we need an error level :\nDEBUG\nINFO\nWARNING\nERROR"<<std::endl;
		return 1;
	}
	Harl errorredirect;	
	errorredirect.complain(argv[1]);
	return 0; 
}