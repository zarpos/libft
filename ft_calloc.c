/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:37:24 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/30 14:30:17 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}

/*
int main(void)
{
	size_t count = sizeof (float);
	size_t size = 5;
	printf("%s\n", calloc(count, size));
	printf("%s\n", ft_calloc(count, size));
}
*/
