/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:32:40 by drubio-m          #+#    #+#             */
/*   Updated: 2022/04/05 16:41:56 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;
	
	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	
	i = -1;
	if (!n)
		return(0);
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	ret = ft_calloc(sizeof (char), (ft_intlen(n) + 1));
	if (n < 0)
	{	
		ret[i++] = '-';
		if (n == -2147483648)
		{
		ret[i++] = '2';
			n = 147483648;
		}
		else
		n = -n;
	}
	if (n < 10)
		ret[i] = (n + '0');
	return (ret);
}

//*****************************************************************************
// INPUT
// #1 el entero a convertir
//*****************************************************************************
// OUTPUT
// #1 La string que represente el número.
// #2 NULL si falla la reserva de memoria.
//*****************************************************************************
// DESCRIPTION
// Utilizando malloc(3), genera una string que 
// represente el valor entero recibido como argumento. 
// Los números negativos tienen que gestionarse.
//*****************************************************************************

int	main(void)
{
	int n = 123;
	printf("%s", ft_itoa(n));
}
