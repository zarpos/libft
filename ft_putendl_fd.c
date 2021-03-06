/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:36:17 by drubio-m          #+#    #+#             */
/*   Updated: 2022/04/10 20:04:18 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
//*****************************************************************************
// INPUT
// s: La string a enviar.
// fd: El file descriptor sobre el que escribir.
//*****************************************************************************
// OUTPUT
// Nada
//*****************************************************************************
// DESCRIPTION
// Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.
//*****************************************************************************
