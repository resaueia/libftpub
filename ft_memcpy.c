/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:25:07 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/21 15:48:09 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*newdst;
	unsigned char	*newsrc;

	if (!dest && !src)
		return (NULL);
	newdst = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	while (n > 0)
	{
		*newdst = *newsrc;
		newdst++;
		newsrc++;
		n--;
	}
	return ((void *)dest);
}
/*This function copies a given number N of characters from one string
into a new one (dest).*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[35] = "So long and thanks for all the fish";
    char dst[35];
    int *f = ft_memcpy(dst, src, 30);

    printf("%p\n", f);
    printf("%s\n", src);
    printf("%s\n", dst);
    printf("%li", strlen(src));
    return 0;
}
*/
