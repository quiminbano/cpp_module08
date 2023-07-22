/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:06:22 by corellan          #+#    #+#             */
/*   Updated: 2023/07/22 18:43:08 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	stack;
	stack.push(3);
	stack.push(2);
	stack.push(1);
	stack.push(500);
	stack.push(23483247);
	MutantStack<int>::iterator it = stack.begin();
	while (it != stack.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return (0);
}