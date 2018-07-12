/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:49:30 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/10 10:31:45 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 0;
	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i < nb)
		{
			res *= nb - i;
			i++;
		}
		return (res);
	}
	else
	{
		return (0);
	}
}
