/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:22:37 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/12 17:38:33 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}
/*This function checks if the argument passed is a letter - be it
a capital letter or not - and returns 1024 if it is (and 0 if it isn't).*/
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%i\n", isalpha('Z'));
	printf("%i", ft_isalpha('A'));
	return(0);
}
*/
