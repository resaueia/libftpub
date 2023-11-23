/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:09:33 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/06 18:33:22 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		search;

	p = (const unsigned char *)s;
	search = (unsigned char)c;
	while (n > 0)
	{
		if (*p == search)
			return ((void *)p);
		n--;
		p++;
	}
	return (NULL);
}
/*This function checks for the occurrence of a given character in a 
string. Should it find it, it returns a string from that point on; if it
doesn't, it returns NULL.*/
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char str[100] = "papillon";
	void *f = ft_memchr(str, 'i', 5);

	printf("%s\n", (char *)ft_memchr(str, 'i', 5));
	printf("%s\n", (char *)memchr(str, 'i', 5));
	printf("%p\n", ft_memchr(str, 'i', 5));
	printf("%p\n", ft_memchr(str, 'i', 5));
}*/
