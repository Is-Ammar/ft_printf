/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putXnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:35:07 by iammar            #+#    #+#             */
/*   Updated: 2024/10/03 14:31:09 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_xxnbr(unsigned int n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n < 16)
	{
		count += ft_putchar(hex[n]);
	}
	else
	{
		count += ft_put_xxnbr(n / 16);
		count += ft_put_xxnbr(n % 16);
	}
	return (count);
}
