#include"project.h"
int find_index(char *key, char a)
{
	int i = 0;
	while (key[i] != '\0')
	{	
		if(key[i] == a)
		{
			return i;
		}
		i++;
	}
	return -1;
}
