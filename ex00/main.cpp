/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:19:02 by corellan          #+#    #+#             */
/*   Updated: 2023/07/03 17:19:26 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	myList;

	myList.push_back(1);
	myList.push_back(5);
	myList.push_front(100);

	std::list<int>::iterator it = myList.begin();
	while (it != myList.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	try
	{
		easyfind< std::list<int> >(myList, 5);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind< std::list<int> >(myList, 20);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::vector<int>	myVector;

	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);

	std::vector<int>::iterator	it2 = myVector.begin();
	while (it2 != myVector.end())
	{
		std::cout << *it2 << std::endl;
		it2++;
	}
	try
	{
		easyfind< std::vector<int> >(myVector, 30);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind< std::vector<int> >(myVector, 5);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}