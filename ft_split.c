/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:46:03 by rsaueia-          #+#    #+#             */
/*   Updated: 2023/11/17 11:04:53 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int	i;
	int	word_nb;

	i = 0;
	word_nb = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			word_nb++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (word_nb);
}

/*This auxiliary function serves as a word count. It traverses the given
string and returns the number of words found and it does so by using
the character c as a compass.*/

static char	*custom_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

/*This auxiliary function allocates memory to duplicate a substring found
in the big one and returns it.*/

/*static int	ft_wordlen(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return(len);
}*/

char	**ft_split(char const *s, char c)
{
	char	**megazord;
	size_t	i;
	int		start_index;
	size_t	words;

	i = -1;
	start_index = -1;
	words = 0;
	if (!s)
		return (NULL);
	megazord = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!megazord)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start_index < 0)
			start_index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_index >= 0)
		{
			megazord[words++] = custom_dup(s, start_index, i);
			start_index = -1;
		}
	}
	megazord[words] = 0;
	return (megazord);
}
/*This function is fed a given string and a special character which will act
as a compass and a separator. Once said character is found, it will separate
the string on that point and create a new string from that point till the 
special character is found again and so forth. Additionaly, the function will
save those substrings in an array of pointers, hence the main variable of the
split function being a char pointer pointer.*/

/*
int main(void)
{
    const char *example_string = "Hello,World,Split,Example";
    char delimiter = ',';
    char **result = ft_split(example_string, delimiter);
    int     i = 0;

    if (result != NULL) {

        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            i++;
        }
    } else {
        printf("Error: ft_split returned NULL.\n");
    }

    return 0;
}*/
