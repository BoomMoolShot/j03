/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 23:11:05 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/09 12:54:50 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		nb = 1;
	}
	else if (power < 0)
	{
		nb = 0;
	}
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
