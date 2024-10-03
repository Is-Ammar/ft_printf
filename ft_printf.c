/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:52:48 by iammar            #+#    #+#             */
/*   Updated: 2024/10/03 15:42:07 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *form, ...)
{
    va_list args;
    int len = 0;

    va_start(args, form);
    
    while (*form)
    {
        if (*form == '%')
        {
            form++;
            if (*form == 'd' || *form == 'i')
            {
                int num = va_arg(args, int);
                len += ft_putnbr(num);
            }
            else if (*form == 's')
            {
                 char *str = va_arg(args, char *);
                len += ft_putstr(str);
            }
            else if (*form == 'p')
            {
                len += ft_putstr("0x");
                len += ft_putptr((unsigned long)va_arg(args, void *));;
            }
            else if (*form == 'u')
            {
                unsigned int num = va_arg(args, unsigned int);
                len += ft_putnbr(num);
            }
            else if (*form == 'x')
            {
                unsigned int num = va_arg(args, unsigned int);
                len += ft_putxnbr(num);
            }
            else if (*form == 'X')
            {
                unsigned int num = va_arg(args, unsigned int);
                len += ft_put_xxnbr(num);
            }
            else if (*form == 'c')
            {
                char ch = (char)va_arg(args, int);
                len += ft_putchar(ch);
            }
            else if (*form == '%')
            {
                len += ft_putchar('%');
            }
            
        }
        else
        {
            len += ft_putchar(*form);
        }
        form++;
    }
    
    va_end(args);
    return len;
}
// int main()
// {
//     int a = 25;
//     int b = 9;
//     char c = 'a';
//     char *d = "abcdef";
//     printf("original:\n%c\n%s\n %p\n %d\n %i\n %u\n %X\n", c,d,d,a,b,a,a);
//     ft_printf("mine:\n%c\n%s\n %p\n %d\n %i\n %u\n %X\n", c,d,d,a,b,a,a);
//     return 0;
// }