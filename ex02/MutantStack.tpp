/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:38:12 by corellan          #+#    #+#             */
/*   Updated: 2023/07/05 17:31:12 by corellan         ###   ########.fr       */
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
