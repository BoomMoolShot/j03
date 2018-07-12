/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:25:33 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/08 23:15:11 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;

	res = nb;
	if (power == 0)
	{
		res = 1;
	}
	else if (power < 0)
	{
		res = 0;
	}
	power--;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
