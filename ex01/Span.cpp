/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:47:50 by corellan          #+#    #+#             */
/*   Updated: 2023/07/04 18:57:12 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0), _store(0)
{
	std::cout << "Default constructor for the Span class called" << std::endl;
	return ;
}

Span::Span(unsigned int n) : _n(n), _store(0)
{
	std::cout << "Constructor called for the Span class passing " << n << " as a argument" << std::endl;
	if (n > 0)
		this->_vector.reserve(n);
	return ;
}

Span::~Span(void)
{
	std::cout << "Default destructor for the Span class called" << std::endl;
	return ;
}

void	Span::addNumber(int n)
{
	if ((this->_n == 0) || (this->_store >= this->_n))
		throw (ErrorException());
	this->_vector.push_back(n);
	this->_store++;
	return ;
}

int	&Span::operator[](unsigned int i)
{
	if ((i >= this->_n))
		throw (ErrorException());
	return (this->_vector[i]);
}

int	Span::longestSpan(void)
{
	std::vector<int>	tmp;

	if (this->_vector.size() < 2)
		throw (LongestShortestException());
	tmp = this->_vector;
	std::sort(this->_vector.begin(), (this->_vector.begin() + (this->_store - 1)));
	return (tmp[this->_store - 1] - tmp[0]);
}

const char	*Span::ErrorException::what(void) const throw ()
{
	return ("Wait duuude!! You are trying to add data in a forbidden place, or you are trying to access to a forbidden place");
}

const char	*Span::LongestShortestException::what(void) const throw ()
{
	return ("Dude!! It's impossible to determine the longest or the shortest span with just one number");
}