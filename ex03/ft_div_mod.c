/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:07:55 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/23 15:08:30 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
    int dividend = 42;
    int divisor = 5;
    int result_div, result_mod;

    ft_div_mod(dividend, divisor, &result_div, &result_mod);

    printf("Dividend: %d, Divisor: %d\n", dividend, divisor);
    printf("Division result: %d, Modulus result: %d\n", result_div, result_mod);

    return 0;
}
*/
