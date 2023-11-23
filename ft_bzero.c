/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:15:17 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/21 20:28:30 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*holder;

	holder = (unsigned char *)s;
	while (n > 0)
	{
		*holder = 0;
		holder++;
		n--;
	}
}

/*This function fills out N bytes of a string with NULL.*/
