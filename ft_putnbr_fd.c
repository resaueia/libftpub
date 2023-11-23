/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:55:31 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/09 18:23:17 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	current_nbr;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n, fd);
	}
	else if (n <= 9)
	{
		current_nbr = n + 48;
		ft_putchar_fd(current_nbr, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*This function prints a given number in the desired output (fd).
It does so by implemmenting a given mathematical logic and it makes sure to
properly deal with INT_MIN without letting it break the code.*/
