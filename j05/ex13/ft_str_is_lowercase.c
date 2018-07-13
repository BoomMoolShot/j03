/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:31:25 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 12:36:03 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lowcase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
