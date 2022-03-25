/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:37:22 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/23 13:05:33 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*cast_dst;
	char	*cast_src;
	int		i;

	cast_dst = (char *) dst;
	cast_src = (char *) src;
	i = 0;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		i++;
	}
	return (cast_dst);
}
