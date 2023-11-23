/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:19:27 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/09 18:04:16 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	size;
	char	*substr;

	str_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= str_len)
		return (ft_strdup(""));
	size = ft_strlen(s) + start;
	if (size < len)
		len = size;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*This function searches for a character inside a given string. Once it finds
it, it allocates memory for N size characters returning a new string created
from that point on.*/
/*
#include <stdio.h>
int main()
{
    char    str[30] = "Apples/are/red";
    printf("%s\n", ft_substr(str, 11, 3));
    printf("%s\n", ft_substr(str, 0, 6));
    printf("%s", ft_substr(str, 7, 3));

    return (0);
}*/
