/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:59:05 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/08 12:30:47 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putnbr(int n);

int		is_ordered(int *tab, int size)
{
	int		i;
	int		sorted;

	sorted = 1;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			sorted = 0;
		}
		i++;
	}
	return (sorted);
}

void	sort_table(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
	}
}

			
void	ft_sort_integer_table(int *tab, int size)
{
	while (!(is_ordered(tab, size)))
	{
		sort_table(tab, size);
	}
}

