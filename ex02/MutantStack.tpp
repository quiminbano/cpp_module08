/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:38:12 by corellan          #+#    #+#             */
/*   Updated: 2023/07/22 14:27:08 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
MutantStack<T>::MutantStack(void)
{
	return ;
}

template < typename T >
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template < typename T >
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin(void)
{
	return (this->c.cbegin());
}

template < typename T >
typename MutantStack<T>::const_iterator	MutantStack<T>::cend(void)
{
	return (this->c.cend());
}
