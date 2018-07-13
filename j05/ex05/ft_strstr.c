/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:45:31 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 10:59:55 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		stringlen(char *str)
{
	int		len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

int		compare_strings(char *s1, int len, char *s2, int offset)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (s1[i] != s2[i + offset])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		tof_len;
	int		str_len;
	int		delta;

	i = 0;
	tof_len = stringlen(to_find);
	if (tof_len < 1)
		return (str);
	str_len = stringlen(str);
	delta = str_len - tof_len;
	while (i <= delta)
	{
		if (compare_strings(to_find, tof_len, str, i))
			return (str + i);
		i++;
	}
	return (0);
}
