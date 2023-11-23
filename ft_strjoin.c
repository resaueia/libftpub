/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:15:38 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/13 21:48:32 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*test;
	size_t	i;
	size_t	j;

	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	test = newstr;
	i = 0;
	j = 0;
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		*newstr = s1[i];
		newstr++;
		i++;
	}
	while (s2[j])
	{
		*newstr = s2[j];
		newstr++;
		j++;
	}
	*newstr = '\0';
	return (test);
}
/*This function traverses two given strings, collects the size of each one
and allocates memory space for the sum of their sizes; then, it joins them
both in a new string - and in the newly allocated space - and returns it.*/
