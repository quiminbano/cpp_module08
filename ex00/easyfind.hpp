/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:04:09 by corellan          #+#    #+#             */
/*   Updated: 2023/07/22 14:25:18 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <list>
# include <vector>
# include <stdexcept>

class	ErrorException : public std::exception
{
public:
	virtual const char	*what(void) const throw();
};

template<typename T>
void	easyfind(T &cont, int to_find);

# include "easyfind.tpp"

#endif