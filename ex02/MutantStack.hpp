/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:55:33 by corellan          #+#    #+#             */
/*   Updated: 2023/07/24 12:53:19 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template < typename T >
class MutantStack : public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack(void);
	~MutantStack(void);

	iterator	begin(void);
	iterator	end(void);
	const_iterator	cbegin(void) const;
	const_iterator	cend(void) const;

private:

	MutantStack(MutantStack const &rhs);
	MutantStack	&operator=(MutantStack const &rhs);
};

#include "MutantStack.tpp"

#endif