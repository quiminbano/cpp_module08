/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:06:22 by corellan          #+#    #+#             */
/*   Updated: 2023/07/05 16:28:39 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	stack;
	stack.push(3);
	stack.push(2);
	stack.push(1);
	MutantStack<int>::iterator it = stack.begin();
	while (it != stack.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return (0);
}