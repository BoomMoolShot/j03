/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:18:18 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 10:48:45 by abaisago         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	len = stringlen(src);
	while (i < n)
	{
		if (i < len)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
