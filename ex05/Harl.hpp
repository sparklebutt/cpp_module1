/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Harl.hpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: shaboom <shaboom@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/12/05 11:00:16 by shaboom		   #+#	#+#			 */
/*   Updated: 2024/12/05 11:13:58 by shaboom		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>


class Harl
{
	private:
		void debug ( void );
		void info ( void );
		void warning ( void );
		void error ( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};
