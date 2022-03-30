/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:14:36 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/30 01:38:42 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i <= len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	if (haystack[i] == needle[j])
		return ((char *)haystack + j);
	else
		return (0);
}
/*
int main(void)
{
	char *dst = "MZIdwedewT";
	char *src = "MZIT";
	size_t	n = 43320;
	printf("%s\n", strnstr(dst, src, n));
	printf("%s", ft_strnstr(dst, src, n));
}
*/
