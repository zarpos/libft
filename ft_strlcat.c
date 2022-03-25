/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:18:22 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/25 11:22:13 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	z;
	
	n = ft_strlen(src);
	i = ft_strlen(dst);
	z = 0;
	if (i > dstsize)
		return (n + dstsize);
	else
	{
		while (z < (dstsize - i) - 1)
		{
			dst[i + z] = src[z];
			z++;
		}
		dst[i + dstsize] = '\0';
		return (i + n);
	}
}
