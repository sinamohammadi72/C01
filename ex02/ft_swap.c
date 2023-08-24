/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:07:26 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/23 15:07:48 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

/*
int main(void)
{
    int num1 = 5;
    int num2 = 10;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/