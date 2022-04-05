/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:11:09 by drubio-m          #+#    #+#             */
/*   Updated: 2022/04/05 16:27:45 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				word_count++;
			i++;
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;
	size_t	index;
	size_t	lines;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	lines = ft_count_words(s, c);
	str = malloc(sizeof (char *) * (lines + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] && (index < lines))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		str[index++] = ft_substr(s, j, (i - j));
	}
	str[index] = NULL;
	return (str);
}
//*****************************************************************************
// INPUT
// #1. La string a separar.
// #2. El caracter delimitador.
//*****************************************************************************
// OUTPUT
// El array de strings resultante. NULL si la reserva falla.
//*****************************************************************************
// DESCRIPTION
// Reserva con malloc(3) y devuelve un array de strings obtenido al separar 
// ’s’ con el caracter ’c’ como delimitador. El array debe terminar en NULL.
//*****************************************************************************
