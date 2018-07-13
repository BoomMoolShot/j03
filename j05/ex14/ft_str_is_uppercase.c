/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:31:25 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 12:41:09 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_upcase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
