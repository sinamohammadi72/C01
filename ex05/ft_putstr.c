/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:10:07 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/24 12:44:05 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	write(1, str, lenght);
}
/*
int main(void)
{
    char message[] = "Hello, world!\n";

    ft_putstr(message);

    return 0;
}
*/
