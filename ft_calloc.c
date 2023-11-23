/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:56:41 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/08 21:26:58 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*This function allocates the required memory
 as per requested and returns a pointer to it. 
 If allocation is unsuccsesfull, the return is NULL. 
 Calloc is slightly different than malloc since it 
 sets the allocated memory to zero - here, we do 
 that by calling the bzero function.*/
