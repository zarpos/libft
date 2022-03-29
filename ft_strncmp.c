/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:26:36 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/27 22:47:38 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *) s1;
	cast_s2 = (unsigned char *) s2;
	while ((cast_s1[i] == cast_s2[i]) && (i < n - 1))
	{
		if ((cast_s1[i] == '\0') || (cast_s2[i] == '\0'))
			return (0);
		i++;
	}	
	if (cast_s1[i] != cast_s2[i])
		return (cast_s1[i] - cast_s2[i]);
	return (0);
}
