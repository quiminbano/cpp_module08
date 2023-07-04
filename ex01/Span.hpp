/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:31:53 by corellan          #+#    #+#             */
/*   Updated: 2023/07/05 01:19:26 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <iterator>

class Span
{
private:
	unsigned int				_n;
	unsigned int				_store;
	std::vector<int>			_vector;
	static int					_flag;
	static unsigned int			_range;

	static int	_generateRandomNumbers(void);

public:

	class	ErrorAccessException : public std::exception
	{
		virtual const char	*what(void) const throw ();
	};
	class	LongestShortestException : public std::exception
	{
		virtual const char	*what(void) const throw ();
	};
	
	Span(void);
	Span(unsigned int n);
	Span(Span const &rhs);
	~Span(void);

	Span				&operator=(Span const &rhs);
	int					&operator[](unsigned int i);

	void				addNumber(int n);
	int					shortestSpan(void);
	int					longestSpan(void);
	void				addInARowRandomNumbers(unsigned int range);
	std::vector<int>	getVector(void) const;
	unsigned int		getN(void) const;
	unsigned int		getStore(void) const;
};

#endif