/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:04:00 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/21 16:35:55 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	i = -1;
	if (dest < src && dest + n > src)
	{
		while (++i < n)
			temp1[i] = temp2[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			temp1[i - 1] = temp2[i - 1];
			i--;
		}
	}
	return ((void *)dest);
}

/*This function copies n characters from src to dest and, unlike memcpy,
it is a safer option for it avoids overlapping memory blocks as it uses
temporary variables and checks which order of copying is a safer approach
to decide if said copy will occur start to finish or finish to start.*/
