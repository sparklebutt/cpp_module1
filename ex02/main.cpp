/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:55:22 by araveala          #+#    #+#             */
/*   Updated: 2025/01/07 13:19:18 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/**
 * 'string' is a string with a value
 * 
 * 'stringPTR' is a pointer to the string object, as string itself is an object, not a pointer
 * 
 * 'stringREF' is merley a refrence too original string, 
 *	meaning we can use stringREF to alter the original string.
 */

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout<<"string has address of = "<<&string<<std::endl;
	std::cout<<"stringPTR points to address of = "<<stringPTR<<std::endl;
	std::cout<<"stringREF has address of = "<<&stringREF<<std::endl;
	
	std::cout<<"string = "<<string<<std::endl;
	std::cout<<"stringPTR points to value = "<<*stringPTR<<std::endl;
	std::cout<<"stringREF references value = "<<stringREF<<std::endl;

	stringREF = "IS IT THOUGH?";
	std::cout<<string<<std::endl;
	string = "hmmm";
	std::cout<<string<<std::endl;
	return 0;
}