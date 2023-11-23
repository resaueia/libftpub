/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:27:05 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/15 18:02:51 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

/*This is an auxiliary function to determine the number of decimals in N.
It also counts an extra space if it finds a negative number and it returns
another extra space for the Null terminating character.*/

char	*ft_itoa(int n)
{
	char	*str;
	size_t	n_size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	n_size = counter(n);
	str = (char *)malloc(sizeof(char) * n_size);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[--n_size] = '\0';
	while (n > 0)
	{
		str[--n_size] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

/*This function transforms an int number into a string. It does so by
implemmenting a mathematical logic opposite to the atoi function.*/
