/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/24 14:00:34 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	vector(1000000);

	vector.addNumber(50);
	vector.addNumber(200);
	vector.addInARowRandomNumbers(1000000);
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
	return (0);
}
