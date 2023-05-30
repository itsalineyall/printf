/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:07:06 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/30 18:36:27 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
// cspdiuxX%

static int	ft_verify(va_list args, char c)
{
	if (c == 'c')
		return(ft_putchar(va_arg(args, int)));
	if (c == 's')
		return(ft_putstr(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return(ft_putnbr(va_arg(args, int)));
	if (c == 'x' || c == 'X')
		return(ft_hex(va_arg(args, unsigned int), c));
	if (c == 'u')
		return(ft_putnbr_u(va_arg(args, unsigned int)));
	if (c == 'p')
		return(ft_pointer(va_arg(args, unsigned long long)));
	if (c == '%')
		return(ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
    va_list args;

    va_start(args, str);
    int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_verify(args, str[i]);
			i++;
		}
		else
		{
		count++;
		ft_putchar(str[i]);		
		i++;
		}
	}
	va_end(args);
	return(count);
}

// int	main(void)
// {
// 	{printf("%schar %%c%s\n", YELLOW, RESET);
// 	printf("%sft_printf%s\n", CIANO, RESET);
// 	int x = ft_printf("char is %c\n", 'A');
// 	printf("return = %d\n", x);
// 	printf("%sprintf%s\n", CIANO, RESET);
// 	int ba = printf("char is %c\n", 'A');
// 	printf("return = %d\n", ba);
// 	if (x == ba)
// 		printf("%sYEAAAAHHH%s\n\n\n", GREEN, RESET);
// 	else
// 		printf("%sOOOOOPPHSS%s\n\n\n", RED, RESET);
// 	}

// 	{printf("%sstring %%s%s\n", YELLOW, RESET);
// 	char *s = "aline";
// 	printf("%sft_printf%s\n", CIANO, RESET);
// 	int z = ft_printf("my name is %s\n", s);
// 	printf("return = %d\n\n", z);
// 	printf("%sprintf%s\n", CIANO, RESET);
// 	int zu = printf("my name is %s\n", s);
// 	printf("return = %d\n", zu);
// 	if (z == zu)
// 		printf("%sYEAAAAHHH%s\n\n\n", GREEN, RESET);
// 	else
// 		printf("%sOOOOOPPHSS%s\n\n\n", RED, RESET);
// 	}

// 	{printf("%sinteger %%i %%d%s\n", YELLOW, RESET);
// 	int n = 800;
// 	printf("%sft_printf%s\n", CIANO, RESET);
// 	int r = ft_printf("number is %d\n", n);
// 	printf("return = %i\n\n", r);
// 	printf("%sprintf%s\n", CIANO, RESET);
// 	int ru = printf("number is %d\n", n);
// 	printf("return = %i\n\n", ru);
// 	if (r == ru)
// 		printf("%sYEAAAAHHH%s\n\n\n", GREEN, RESET);
// 	else
// 		printf("%sOOOOOPPHSS%s\n\n\n", RED, RESET);
// 	}

// 	{printf("%shexadecimal %%x%s\n", YELLOW, RESET);
// 	int hex = -2147483647;
// 	printf("%sprintf%s\n", CIANO, RESET);
// 	int b = printf("%d in hex is %X\n", hex, hex);
// 	printf("return = %i\n\n", b);
// 	printf("%sft_printf%s\n", CIANO, RESET);
// 	int a = ft_printf("%d in hex is %X\n", hex, hex);
// 	printf("return = %i\n", a);

// 	if (a == b)
// 		printf("%sYEAAAAHHH%s\n\n\n", GREEN, RESET);
// 	else
// 		printf("%sOOOOOPPHSS%s\n\n\n", RED, RESET);
// 	}

// 	unsigned int ha = 4294967295;
// 	ft_printf("%u\n\n", ha);

// 	printf("%spointer %%p%s\n", YELLOW, RESET);
// 	int g = 400;
// 	printf("%sft_printf%s\n", CIANO, RESET);
// 	int re = ft_printf("%p\n", &g);
// 	printf("return = %i\n\n", re);
// 	printf("%sprintf%s\n", CIANO, RESET);
// 	int ro = printf("%p\n", &g);
// 	printf("return = %i\n\n", ro);
	
// 	if (re == ro)
// 		printf("%sYEAAAAHHH%s\n\n\n", GREEN, RESET);
// 	else
// 		printf("%sOOOOOPPHSS%s\n\n\n", RED, RESET);

// 	return (0);
// }