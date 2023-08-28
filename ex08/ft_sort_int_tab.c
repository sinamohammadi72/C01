/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:14:49 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/28 13:39:18 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	n;
	int	c;

	index = 0;
	c = 0;
	while (index < size)
	{
		n = index + 1;
		while (n < size)
		{
			if (tab[index] > tab[n])
			{
				c = tab[n];
				tab[n] = tab[index];
				tab[index] = c;
			}
			n++;
		}
		index++;
	}
}

/* int main()
{
    int array[] = {5, 2, 8, 1, 3};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    ft_sort_int_tab(array, size);

    printf("\nAfter sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
*/