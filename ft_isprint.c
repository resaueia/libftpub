/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:13:34 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/12 19:18:17 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (16384);
}
/*This function checks if the given argument is a printable character
from the ascii table. If so, it returns 16384; if not, it returns 0.*/
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%i\n", isprint('\b'));
	printf("%i", ft_isprint('\b'));
	return(0);
}*/
