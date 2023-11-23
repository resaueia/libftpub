/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:46:49 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/17 12:02:57 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	len2;

	len = ft_strlen(s);
	len2 = len;
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)&s[len - 1]);
		len--;
	}
	if (c == '\0')
		return ((char *)&s[len2]);
	return (NULL);
}
/*This function searches a string for the last occurence of a given 
character and returns a pointer toit; if not found, it returns null. 
Initially, for performance reasons, I thought of first performing a 
stringlen and then searching the string backwards, hence finding the 
first - which semantically would be last - occurence of said character. 
However, because I would have to search the entire string in the strlen 
anyways, I changed my code to function the first time it searched the string.*/
/*
#include <stdio.h>
#include <string.h>
int main() 
{
    const char *src = "tripouille";
    
    //printf("%p\n", src[0]);
    printf("%s\n", ft_strrchr(src, 0));
    printf("%p\n", ft_strrchr(src, 0));
    printf("%p\n", strrchr(src, 0));

    return 0;
}
*/
