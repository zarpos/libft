/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:10:08 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/28 17:41:25 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cast_dst;
	char	*cast_src;
	size_t	i;

	cast_dst = (char *) dst;
	cast_src = (char *) src;
	i = 0;
	if (cast_dst == 0 && cast_src == 0)
		return (0);
	if (cast_dst > cast_src)
	{
		while (i < len)
		{
			i++;
			cast_dst[len - i] = cast_src[len - i];
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(cast_dst++) = *(cast_src++);
		}
	}
	return (cast_dst);
}
/*
int main(void)
{
	void *dst = "Start stop";
//	void *src = 0;
	size_t len = 5;
//	printf("%s\n", memmove(&dst, &dst[2], len));
	printf("%s\n", ft_memmove(&dst, &dst[2], len));
}
*/
