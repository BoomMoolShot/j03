/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 22:52:54 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/16 10:30:30 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		string_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		wrong_chars_repeat(char *base, int len)
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (c < len)
	{
		while (i < len)
		{
			if (base[c] == base[i] && c != i)
				return (1);
			i++;
		}
		i = 0;
		c++;
	}
	while (i < len)
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if (base[i] < 32 || base[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

int		has_errors(char *base, long long int *nb, int len)
{
	if (*nb < 0)
	{
		*nb *= -1;
		ft_putchar('-');
	}
	if (len < 2)
		return (1);
	if (wrong_chars_repeat(base, len))
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	int				len;
	long long int	nb;
	int				res[32];

	i = 0;
	len = string_len(base);
	nb = nbr;
	if (has_errors(base, &nb, len))
		return ;
	while (nb >= len)
	{
		res[31 - i] = nb % len;
		nb /= len;
		i++;
	}
	res[31 - i] = nb;
	while (i >= 0)
	{
		ft_putchar(base[res[31 - i]]);
		i--;
	}
}
