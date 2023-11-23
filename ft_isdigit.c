/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:39:41 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/12 17:51:32 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*This function checks if the given argument is a number in the ascii table
between 0 and 9. If so, it returns 2048; if not, it returns 0.*/
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%i\n", isdigit('8'));
	printf("%i", ft_isdigit('8'));
	return(0);
}
*/
