#include<stdio.h>
#include<string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
            if (s1[i] > s2[i])
			    return (s1[i] - s2[i]);
		    else if (s1[i] < s2[i])
			    return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;
	int	len;

	len = ft_strlen(to_find);
	i = 0;
	if (to_find[i++] == '\0')
		return ((char *)(str));
	while (*str != '\0' && ((int )n) > 0)
	{
		if ((ft_strncmp(str, to_find, len) == 0))
			return ((char *)(str));
		str++;
		n--;
	}
	return (0);
}

int main () {
   const char haystack[20] = "www.1337.com";
   const char needle[10] = "1337";
   char *ret;

   ret = ft_strnstr(haystack, needle, 3);
   printf("The strstr is: %s\n", ret);
   return(0);
}