/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:00:06 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/07 16:31:33 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { std::cout<<"creating harl"<<std::endl; }
Harl::~Harl() { std::cout<<"destroying harl"<<std::endl; }

void Harl::debug ( void )
{
	std::cout<<"I guess you expect me to do all the debugging for you ????"<<std::endl;	
}
void Harl::info ( void )
{
	std::cout<<"information is classified, how bothersome"<<std::endl;	
}
void Harl::warning ( void )
{
	std::cout<<"are you sure we should be filling this balloon with hot sauce!!"<<std::endl;
}
void Harl::error ( void )
{
	std::cout<<"balloon explodes"<<std::endl;
}

/** 
 * @brief 
 * Created an array containing comparison error level keywords that will be 
 * compared to user input as EXACT keyword.
 * 
 * Using/typedef an array of memeber function pointers ordered the same as keywords array.
 * if keyword matches user input the corresponding iteration from fucntion pointer array
 * is called.
 * @param level a string that contains the word suggestive of which error eg:
 * DEBUG INFO WARNING ERROR
 * @note educational only
 * const int num = sizeof(keywords) / sizeof(keywords[0]);
 * to calculate the size of the array in bytes but since we already know the size
 * i will instead use a manual approach for better visability on code proggression.
 * 
 */
void Harl::complain( std::string level )
{
	const char* keywords[]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*handleComplaint[])(void) = {&Harl::debug, &Harl::info, &Harl::warning,  &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == keywords[i])
		{
			(this->*handleComplaint[i])();
			return ;
		}
	}
	std::cerr<<"syntax error does input( "<<level<<" ) match following? :"<<std::endl;
	std::cerr<<"DEBUG\nINFO\nWARNING\nERROR"<<std::endl;
}