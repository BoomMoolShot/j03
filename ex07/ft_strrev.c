/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:49:59 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/06 10:00:55 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putstr(char *str);

char	*ft_strrev(char *str)
{
	int		cnt;
	int		len;
	char	tmp;

	cnt = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;
	while (cnt < len)
	{
		tmp = str[cnt];
		str[cnt] = str[len];
		str[len] = tmp;
		cnt++;
		len--;
	}
	putstr(str);
	return (str);
}
