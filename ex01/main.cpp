/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/04 21:57:20 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	vector(5);
	int		i;

	i = 0;
	vector.addNumber(20);
	vector.addNumber(2);
	vector.addNumber(50);
	vector.addNumber(10);
	vector.addNumber(25);
	try
	{
		vector.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "the longestSpan is: " << vector.longestSpan() << std::endl;
	std::cout << "the shortestSpan is: " << vector.shortestSpan() << std::endl << std::endl;
	std::cout << "The content of the class Vector is:" << std::endl;
	while (i < 6)
	{
		try
		{
			std::cout << vector[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}