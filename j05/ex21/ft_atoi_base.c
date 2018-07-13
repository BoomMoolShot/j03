/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:40:10 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/12 22:24:31 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     string_len(char *str)
{
	int     i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void    signed_str(char *str, int *i, int *neg)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			*neg = -1;
		}
		(*i)++;
	}
}

int     wrong_chars_repeat(char *base)
{
	int     c;
	int     i;

	c = 0;
	i = 0;
	while (base[c] != '\0')
	{
		while (base[i] != '\0')
		{
			if (base[c] == base[i] && c != i)
			{
				return (1);
			}
			i++;
		}
		i = 0;
		c++;
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if (base[i] < 32 || base[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

int		is_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
	}
	return (0);
}

int ft_atoi_base(char *str, char *base)
{
	int     i;
	int     nbr;
	int     neg;
	int		len_base;
	int		len_str;

	i = 0;
	nbr = 0;
	neg = 1;
	len_base = string_len(base);
	len_str = string_len(str);
	signed_str(str, &i, &neg);
	while (is_in_base(str[i], base)) 
	{
		nbr *= 10;
		nbr += ((int)str[i] - 48);
		i++;
	}
	nbr *= neg;
	return (nbr);
}
