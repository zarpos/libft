/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:56:37 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/23 20:19:48 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
unsigned	int i;
unsigned	int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize < i)
	{
		while (src[j] != '\0')
			j++;
		return (j); 
	}
	else
		return (0);
}

int main(void)
{
	char dst[] = "manolo";
	char src[] = "hola";
	size_t z;

	z = 9;
//	printf("%lu\n", strlcpy(dst, src, z));
	printf("%lu\n", ft_strlcpy(dst, src, z));
	//puts(dst);
}
