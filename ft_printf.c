/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:52:48 by iammar            #+#    #+#             */
/*   Updated: 2024/10/02 21:58:02 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *form, ...)
{
    va_list args;
    va_start (args,form);
    while(*form)
    {
        if(*form == "%")
        {
            form++;
            if(*form == "d")
            {
                int num = va_arg(args, int )
                ft_putnbr(num);
            }
            else if (*form == 's')
            {
                const char *str = va_arg(args, const char *);
                ft_putstr(str);
            }
               else if (*form == 'p')
            {
                void *ptr = va_arg(args, void *);
                // ft_putptr(ptr);
            }
            
        }
            
    }
}