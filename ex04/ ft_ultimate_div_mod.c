/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:08:58 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/23 15:09:36 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
int main(void)
{
int dividend = 17;
int divisor = 5;

printf("Before operation: dividend = %d, divisor = %d\n", dividend, divisor);

ft_ultimate_div_mod(&dividend, &divisor);

printf("After operation: quotient = %d, remainder = %d\n", dividend, divisor);

return 0;
}
*/
