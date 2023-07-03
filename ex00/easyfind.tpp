/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:12:07 by corellan          #+#    #+#             */
/*   Updated: 2023/07/03 17:18:48 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

const char	*ErrorException::what(void) const throw()
{
	return ("The number that you are trying to find it is not in this container");
}

template<typename T>
void	easyfind(T &cont, int to_find)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), to_find);
	if (it != cont.end())
		std::cout << "Number was found in the possition " << std::distance(cont.begin(), it) << std::endl;
	else
		throw (ErrorException());
	return ;
	
}

#endif