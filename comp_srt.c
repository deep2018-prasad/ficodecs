#include"project.h"

int comparing_string(char *a, char *b)
{
	int i, j, k;
	i =0; j = 0;
	while(*(a+i) != '\0')
	{
		i++;
	}
	
	while (*(b+j) != '\0')
	{
		j++;
	}
	
	if(i != j)
	{
		return 0;
	}

	else
	{
		k = i;
		for(i=0; i<k; i++)
		{
			if( a[i] != b[i])
			{
				return 0;
			}
		}
	}

	return 1;
}
