/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:23:06 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/30 21:35:28 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	z;

	z = 0;
	while ((s1[z] != '\0' || s2[z] != '\0') && n--)
	{
		if (s1[z] != s2[z])
			return ((unsigned char)s1[z] - (unsigned char)s2[z]);
		z++;
	}
	return (0);
}
/*This function compares the first N characters of two strings and when it
finds different ones, it returns the difference between them; if not, it
returns 0.*/

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "test\200";
	char	str2[] = "test\0";
	unsigned int	n = 6;

	printf("%i\n", ft_strncmp(str1, str2, n));
	printf("%i", strncmp(str1, str2, n));
	return(0);
}*/
