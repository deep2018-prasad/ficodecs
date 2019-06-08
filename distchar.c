#include"project.h"
char * dist_char_count(char * local_buff)
{
	int length = 0;
	while (local_buff [length] != '\0')
	{
		length++;
	}
	if(length > 0)
	{
		length--;
		char * dist_str = NULL;
		int dis_length =0;
		dist_str = malloc (sizeof(char));
		dist_str[0] = local_buff[0];
		dis_length++;
		int i,j;
		int flag = 0;
		
		for( i=1; i<length; i++)
		{
			for(j = 0; j< dis_length; j++)
			{
				if(dist_str[j] == local_buff[i])
				{
					flag = 0;
					break;
				}
				else
				{
					flag = 1;
				}
			}
			if( flag == 1)
			{
				dist_str = realloc(dist_str, dis_length + 1);
				dist_str [dis_length] = local_buff[i];
				dis_length++;
			}
		}
		dist_str[dis_length] = '\0';
		return dist_str;
	}
	else
	{
		return 0;
	}
}
