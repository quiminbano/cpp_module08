/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:47:50 by corellan          #+#    #+#             */
/*   Updated: 2023/07/22 14:26:41 by corellan         ###   ########.fr       */
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
	if (Span::_flag == 0)
	{
		std::srand(std::time(NULL));
		Span::_flag = 1;
	}
	if (n > 0)
		this->_vector.reserve(n);
	return ;
}

Span::Span(Span const &rhs)
{
	std::cout << "Copy constructor for the Span class called" << std::endl;
	*this = rhs;
	return ;
}

Span::~Span(void)
{
	std::cout << "Default destructor for the Span class called" << std::endl;
	return ;
}

int	&Span::operator[](unsigned int i)
{
	if ((i >= this->_n))
		throw (ErrorAccessException());
	return (this->_vector[i]);
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs.getVector();
		this->_n = rhs.getN();
		this->_store = rhs.getStore();
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if ((this->_n == 0) || (this->_store >= this->_n))
		throw (ErrorAccessException());
	this->_vector.push_back(n);
	this->_store++;
	return ;
}

int	Span::longestSpan(void)
{
	std::vector<int>	tmp;

	if (this->_vector.size() < 2)
		throw (LongestShortestException());
	tmp = this->_vector;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[this->_store - 1] - tmp[0]);
}

int	Span::shortestSpan(void)
{
	std::vector<int>	tmp;
	int					range;
	int					i;

	i = 1;
	if (this->_vector.size() < 2)
		throw (LongestShortestException());
	tmp = this->_vector;
	std::sort(tmp.begin(), tmp.end());
	while (i < static_cast<int>(this->_store))
	{
		if (i == 1)
			range = tmp[i] - tmp[i - 1];
		if ((tmp[i] - tmp[i - 1]) < range)
			range = tmp[i] - tmp[i - 1];
		i++;
	}
	return (range);
}

void	Span::addInARowRandomNumbers(unsigned int range)
{
	if ((this->_n == 0) || (this->_store >= this->_n))
		throw (ErrorAccessException());
	Span::_range = range;
	std::generate_n(std::back_inserter(this->_vector), (this->_n - this->_store), Span::_generateRandomNumbers);
	this->_store = this->_n;
	return ;
}

int	Span::_generateRandomNumbers(void)
{
	return ((std::rand() % Span::_range));
}

std::vector<int>	Span::getVector(void) const
{
	return (this->_vector);
}

unsigned int	Span::getN(void) const
{
	return (this->_n);
}

unsigned int	Span::getStore(void) const
{
	return (this->_store);
}

const char	*Span::ErrorAccessException::what(void) const throw ()
{
	return ("Wait duuude!! You are trying to add data in a forbidden place, or you are trying to access to a forbidden place");
}

const char	*Span::LongestShortestException::what(void) const throw ()
{
	return ("Dude!! It's impossible to determine the longest or the shortest span with just one number");
}

int				Span::_flag = 0;
unsigned int	Span::_range = 0;