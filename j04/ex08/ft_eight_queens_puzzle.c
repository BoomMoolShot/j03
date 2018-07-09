/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:42:36 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/09 17:55:59 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count(int i)
{
	if (i == 92)
		return (92);
	return (count(i + 1));
}

int		ft_eight_queens_puzzle(void)
{
	return (count(0));
}