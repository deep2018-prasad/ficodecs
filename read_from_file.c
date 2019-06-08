#include"project.h"

char *reading_file(char *file_name)
{
	FILE * fp;
		fp = fopen (file_name, "r");

		char * buffer = NULL;
		char ch;
		int i = 0;
		while (!feof(fp))
		{
			fread (&ch, 1, 1, fp);
			buffer = realloc (buffer, i+1);
			buffer[i] = ch;
			i++;
		}

		buffer[i] = '\0';
		
		return buffer;
}
