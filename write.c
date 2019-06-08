#include"project.h"

int writing_file(char *file_name)
{
	FILE *fp;
	fp = fopen(file_name, "w");

	char msg[1000];
	fgets(msg, 1000, stdin);
	int i;
	i=0;
	while(msg[i] != '\0')
	{
		i++;
	}
	msg[i] = '\n';
	int length = i++;
	fwrite(msg, length, 1, fp);
	fclose(fp);
	fflush(fp);
	return 0;
}
