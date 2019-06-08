#include "project.h"

char * str_concatanate(char * str1, char * str2)
{
	int len;
	char * str3;
	
	int i, j;
	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	
	len = len + i;
	i = 0;
	
	while (str2[i] != '\0')
	{
		i++;
	}
	len = len + i;
	
	str3 = malloc (sizeof (char) * len);
	
	i = 0;
	while (str1 [i] != '\0')
	{
		str3[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		str3[i] = str2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return str3;
}
