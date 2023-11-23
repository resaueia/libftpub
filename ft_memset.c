/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:15:01 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/01 17:45:27 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*holder;

	holder = s;
	while (n > 0)
	{
		*holder = c;
		holder++;
		n--;
	}
	return (s);
}
/*memset is a function used to fill a block of memory 
with a set value. The arguments used are the pointer,
the value itself (int value, think ascii) and the
length size; you can manipulate the start point by
incrementing the pointer (ex: arr+5 to start at position 4)*/
