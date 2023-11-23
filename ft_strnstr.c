/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:53:54 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/21 16:47:21 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len >= little_len)
	{
		if (ft_memcmp((char *)big, (char *)little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*This function locates the first occurrence of the string little in the 
string big given a number of 'n' characters to be searched (len). If little 
is an empty string, big is returned; if little occurs nowhere in big, 
NULL is returned; otherwise a pointer to the first character of the first 
occurrence of little is returned. IMPORTANT: len must be big enough to contain
little in its starting position WITHIN len, so if you are looking for 'you' 
inside 'hey you' you need len to be at least = 7!*/

/*#include <stdio.h>
int main()
{
	//const char	*largestring = "bbbbbbbbbbbbbbbba";
	//const char	*smallstring = "";
	//char *ptr;
	char *s1 = "oh no not the empty string !";
	char *s2 = "";

	//ptr = ;
	printf("%s\n", ft_strnstr(((void*)0), "fake", 0));
	printf("%s", strnstr((void*)0, "fake", 0));
	return(0);
}*/
