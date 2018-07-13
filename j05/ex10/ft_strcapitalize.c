/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:01:48 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 11:58:02 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i]) && !is_num(str[i]))
		{
			first_letter = 1;
		}
		if (is_alpha(str[i]) || is_num(str[i]))
		{
			if (is_lowcase(str[i]) && first_letter)
			{
				str[i] -= 32;
			}
			first_letter = 0;
		}
		i++;
	}
	return (str);
}
