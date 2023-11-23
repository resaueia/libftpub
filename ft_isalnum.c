/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:55:01 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/10/12 18:08:50 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}
/*This function checks if the passed argument contains either a letter or a
a number and it returns the number 8 if it does; if not, it returns 0.*/
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%i\n", isalnum('-'));
	printf("%i\n", ft_isalnum('-'));
	return(0);
}*/
