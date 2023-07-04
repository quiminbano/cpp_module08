/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/05 01:24:48 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	vector(5);
	int		i;

	i = 0;
	vector.addInARowRandomNumbers(200);
	try
	{
		vector.addInARowRandomNumbers(200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "the longestSpan is: " << vector.longestSpan() << std::endl;
	std::cout << "the shortestSpan is: " << vector.shortestSpan() << std::endl << std::endl;
	std::cout << "The content of the class Vector is:" << std::endl;
	while (i < 101)
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