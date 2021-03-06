/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:11:29 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/20 13:11:58 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int     i;

    if (!str)
        return (0);
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *get_line(char *buff)
{
    char    *res;
    int     count;

    count = 0;
    if (!buff)
        return (NULL);
    while (buff[count] != '\n' && buff[count])
        count++;
    count += 1;
    res = malloc((count + 1) * sizeof(char));
    res = memmove(res, buff, count);
    res[count] = '\0';
    return (res);
}

char	*get_reminder(char *str)
{
	char	*rem;
	int		count;
	int		len;

	count = 0;
	len = ft_strlen(str);
	if (!str)
		return (NULL);
	while (str[count] && str[count] != '\n')
		count++;
	if (!str[count])
	{
		free (str);
		return (0);
	}
	rem = (char *)malloc(sizeof(char) * (len - count + 1));
	if (!rem)
		return (NULL);
	count += 1;
	memmove(rem, str + count, (len - count));
	rem[len - count] = '\0';
	free (str);
	/*if (ft_strlen(rem) == 0)
		return (free(rem), NULL);*/
	return (rem);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	len;
	char			*res;

	if (!s1)
        return (strdup(s2));
	len = strlen(s1) + strlen(s2);
	res = (char *) malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		res[k++] = s1[i++];
	j = 0;
	while (s2[j] != '\0')
		res[k++] = s2[j++];
	res[k] = '\0';
	return (res);
}

int ft_check(char *buff)
{
    int i;

    if (!buff)
        return (0);
    i = 0;
    while(buff[i] != '\0')
    {
        if (buff[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char	*get_next_line(int fd)
{
    char            buff[BUFFER_SIZE + 1];
    int             re;
    char            *res;
    static char     *rem;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    re = 1;
    while (re != 0 && !ft_check(rem))
    {
        re = read(fd, buff, BUFFER_SIZE);
        if (re == -1)
            return (NULL);
        if (re == 0)
        {
            buff[re] = '\0';
            break ;
        }
        buff[re] = '\0';
        rem = ft_strjoin(rem, buff);
    }
    res = get_line(rem);
    rem = get_reminder(rem);
    return (res);
}

int main()
{
    int fd = open("test.txt", O_RDONLY);
    char *string = get_next_line(fd);
    printf("%s", string);
    char *string1 = get_next_line(fd);
    printf("%s", string1);
    char *string2 = get_next_line(fd);
    printf("%s", string2);
    return 0;
}