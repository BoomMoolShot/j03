/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:40:10 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/16 11:47:31 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	signed_str(char *str, int *i, int *neg)
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

int		wrong_chars_repeat(char *base)
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (base[c] != '\0')
	{
		while (base[i] != '\0')
		{
			if (base[c] == base[i] && c != i)
				return (1);
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

int     has_errors(char *base, int base_len, int str_len)
{
	if (base_len < 2)
		return (1);
	if (str_len < 1)
		return (1);
	if (wrong_chars_repeat(base))
		return (1);
	return (0);
}

int		is_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		nbr;
	int		neg;
	int		base_len;
	int		str_len;

	i = 0;
	nbr = 0;
	neg = 1;
	base_len = string_len(base);
	str_len = string_len(str);
	if (has_errors(base, base_len, str_len))
		   return (0);
	signed_str(str, &i, &neg);
	while (i < str_len)
	{
		if (is_in_base(str[i], base) == -1)
				return (0);
		nbr *= base_len;
		nbr += is_in_base(str[i], base);
		i++;
	}
	nbr *= neg;
	return (nbr);
}
