/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/22 14:26:38 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	vector(1000000);
	int		i;

	i = 0;
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
