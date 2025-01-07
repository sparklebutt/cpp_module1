
// ************************************************************************** //
//                                                                            //
//                                                     #\    /\               //
//   randomChump.cpp                                  #) )  ( ')              //
//                                                   #( (  /  )               //
//   By: araveala <araveala@student.hive.fi>           #\\ (__)|              //
//                                                                            //
//   Created: 2024/12/02 09:47:41 by araveala                                 //
//   Updated: 2024/12/02 09:47:41 by araveala                                 //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

/**
 * @brief randomChump is a memeber fucntion of the Zombiie class, so instead of using 
 * a setter i could alternativly use "randomGuy.m_name = name;"
 *  aswell printing to out accessing the private member directly.  
 */
void	Zombie::randomChump(std::string name)
{
	Zombie randomGuy;
	randomGuy.setName(name);
	randomGuy.announce();
}