/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:59:21 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/10 16:42:20 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skip_special_cases(char *str, int *i)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
	{
		(*i)++;
	}
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

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		neg;
	int		spaces;

	i = 0;
	nbr = 0;
	neg = 1;
	spaces = 0;
	skip_special_cases(str, &i);
	signed_str(str, &i, &neg);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += ((int)str[i] - 48);
		i++;
	}
	nbr *= neg;
	return (nbr);
}
