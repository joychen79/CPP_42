/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:46:52 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/01 16:37:37 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    void	(Harl::*complainPTR[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
	{
		if (level == message[i])
		{
			(this->*complainPTR[i])();
			return ;
		}
	}
    
}

int main()
{
    std::string	level;
	Harl		_harl;

	while (true)
	{
		std::cout << "The level parameter: " << std::endl;
		std::getline(std::cin, level);
		if (std::cin.eof())
			return (1);
		if (level == "EXIT")
			return (0);
		else if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR" && level != "EXIT")
			std::cout << "Invalid Message!" << std::endl;
		_harl.complain(level);
	}
	return (0);
}
