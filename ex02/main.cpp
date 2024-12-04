/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:55:22 by araveala          #+#    #+#             */
/*   Updated: 2024/12/04 12:18:59 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/**
 * brain is a string with a value
 * 
 * stringPTR must be created as a pointer , as string itself is an object, not a pointer
 * 
 * stringREF is merley a refrence too original string, 
 * meaning we can use stringREF to alter the original string.
 */
int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<"string has address of = "<<&string<<std::endl;
    std::cout<<"stringPTR has address of = "<<&stringPTR<<std::endl;
    std::cout<<"stringREF has address of = "<<&stringREF<<std::endl;
    
    std::cout<<"string = "<<string<<std::endl;
    std::cout<<"stringPTR = "<<stringPTR<<std::endl;
    std::cout<<"stringREF = "<<stringREF<<std::endl;
   
    return 0;
}