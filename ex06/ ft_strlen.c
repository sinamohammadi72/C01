/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:24:27 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/24 12:43:45 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
int main() {
    char input[] = "Hello, World!";
    int length = ft_strlen(input);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}
*/
