/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/04 18:56:36 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	vectori(5);
	int		i;

	i = 0;
	vectori.addNumber(1);
	vectori.addNumber(2);
	vectori.addNumber(3);
	vectori.addNumber(4);
	vectori.addNumber(5);
	try
	{
		vectori.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	while (i < 6)
	{
		try
		{
			std::cout << vectori[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		i++;
	}
	std::cout << vectori.longestSpan() << std::endl;
	return (0);
}