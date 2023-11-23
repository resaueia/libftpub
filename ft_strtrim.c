/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:41:52 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/14 16:54:46 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	trimmed = ft_substr(s1, start, (end - start) + 1);
	return (trimmed);
}
/*This function traverses a given string (s1) and checks for certain characters
  (set) at both the beginning and ending of said string. Its main function is
  to generate a new string freed from those characters. If s1 is invalid, it
  returns NULL. If set is invalid or if the string doesnt contain it, the
  function returns a duplicate of said string via ft_strdup.*/
