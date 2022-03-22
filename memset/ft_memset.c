/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:44:32 by drubio-m          #+#    #+#             */
/*   Updated: 2022/03/21 14:21:01 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (b[i] <= len)
	{
		b[i] = (char) c;
		i++;
	}
}

int main(void)
{
	char *b;
	b = "hola que tal";
	
	ft_memset(b, '$', 2);
	puts(b);
}
