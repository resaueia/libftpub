/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:18 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/02 15:20:15 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (src == NULL || dst == NULL || size == 0)
		return (ft_strlen(src));
	while ((len + 1 < size) && (src[len] != '\0'))
	{
		dst[len] = src[len];
		len++;
	}
	if (size > 0)
		dst[len] = '\0';
	return (ft_strlen(src));
}
/*Essa função copia N caracteres (size) iniciais de uma string (src)
e os destina a uma string (dst); ao final, retorna o tamanho dessa cópia.
Caso o retorno não tenha o tamanho dessa cópia, então houve algum erro
durante o processo.*/
/*
int main(void)
{
    char dest[100];
    char src[5] = "hello";
    char dest2[100];
    char src2[5] = "hello";
    size_t f = ft_strlcpy(dest, src, 6);
    printf("%s\n", dest);
    printf("%li\n", f);
    printf("%ld\n", strlen(src));
    printf("%li", ft_strlen(src));
}
*/
