/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:52:19 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/28 11:54:45 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> 

void	ft_rev_int_tab(int *tab, int size)
{
	int	position;
	int	cell;

	position = 0;
	cell = 0;
	while (position < (size / 2))
	{
		cell = tab[position];
		tab[position] = tab[size - 1 - position];
		tab[size - 1 - position] = cell;
		position++;
	}
}

/*

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    const char originalMsg[] = "Original array: ";
    const char reversedMsg[] = "\nReversed array: ";

    write(STDOUT_FILENO, originalMsg, sizeof(originalMsg) - 1);
    for (int i = 0; i < size; i++) {
        char numStr[16];
        int numLen = sprintf(numStr, "%d ", array[i]);
        write(STDOUT_FILENO, numStr, numLen);
    }

    ft_rev_int_tab(array, size);

    write(STDOUT_FILENO, reversedMsg, sizeof(reversedMsg) - 1);
    for (int i = 0; i < size; i++) {
        char numStr[16];
        int numLen = sprintf(numStr, "%d ", array[i]);
        write(STDOUT_FILENO, numStr, numLen);
    }

    return 0;
}
*/