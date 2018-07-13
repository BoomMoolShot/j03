/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:02:16 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/06 15:16:23 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	convert_to_positive(long int *n)
{
	*n *= -1;
}

void	print_negative(long int *n)
{
	if (*n < 0)
	{
		ft_putchar('-');
		convert_to_positive(n);
	}
}

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	print_negative(&n);
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
