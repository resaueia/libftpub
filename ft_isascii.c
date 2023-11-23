/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:16:01 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/12 19:03:33 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*This function checks if the given argument is a number from the ascii
table; if so, it returns 1. If it's not, it returns 0.*/
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%i\n", isascii(128));
	printf("%i", ft_isascii('F'));
}
*/
