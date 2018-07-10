/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:34:17 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/10 09:57:45 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb == 1)
	{
		return (1);
	}
	return (0);
}
