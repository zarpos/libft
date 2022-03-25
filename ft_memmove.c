/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:10:08 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/23 13:55:06 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cast_dst;
	char	*cast_src;
	int		i;

	cast_dst = (char *) dst;
	cast_src = (char *) src;
	i = 0;
	while (i < len)
	{
		cast_dst[i] = cast_src[i];
		i++;
	}
	return (cast_dst);
}
