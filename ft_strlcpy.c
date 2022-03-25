/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:56:37 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/25 18:34:00 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	unsigned long	a;
	int				z;

	z = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[z])
		z++;
	a = 0;
	if (i > dstsize)
	{
		while (a < dstsize - 1)
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
		return (z);
	}
	return (0);
}
