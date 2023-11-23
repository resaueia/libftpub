/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:03:15 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/17 14:15:09 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= destlen || size == 0)
		return (size + srclen);
	while ((destlen + i < size - 1) && src[i] != '\0')
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
/*This function concatenates two strings within a specified size limit. 
Its idea is to avoid overwriting the destination buffer by keeping the 
maximum size of the concatenation equal to size - 1, hence leaving enough 
room for the null-terminating character. The function returns the sum value
 of the two strings.*/
