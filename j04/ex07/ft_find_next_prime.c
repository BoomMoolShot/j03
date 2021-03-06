/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:46:43 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/12 10:51:52 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int		i;

	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 1 || nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * 2 <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
	{
		return (2);
	}
	while (!is_prime(nb))
	{
		nb += 1;
	}
	return (nb);
}
