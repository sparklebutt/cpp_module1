
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

void    Zombie::randomChump(std::string name)
{
    Zombie randomGuy;
    randomGuy.setName(name);
    randomGuy.announce();
}