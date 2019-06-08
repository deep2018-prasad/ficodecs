#include"project.h"

int main(int argc, char **argv)
{
	char * buff;
	char *local_buff;
	char *dist_char;
	int dis_length;
	int num_bits;
	int ret_value;

	if (argc<3)
	{
		printf("No File Open....\n");
		help_project();
		
		return 0;
	}

	if (comparing_string(argv[1], "write"))
	{
		printf("Writing in the File...\n");
		writing_file(argv[2]);
		printf("******************************************************************************************************************************\n");
	}
	else if(comparing_string(argv[1], "read"))
	{
		printf("Reading from a File...");
		buff = reading_file(argv[2]);
		printf("FILE data is .......:\n %s", buff);
		free(buff);	
	}

	else if(comparing_string(argv[1], "dccount"))
	{
		printf("Counting distinct charactre....");
		local_buff = reading_file(argv[2]);
		printf("File data is .........\n %s \n", local_buff);
		dist_char = dist_char_count(local_buff);
		dis_length = 0;
		if(dist_char != NULL)
		{
			printf("Distinct character is......\n%s\n", dist_char);
			while (dist_char[dis_length] != '\0')
			{
				dis_length++;
			}
			printf ("Number of distinct characters is %d.\n", dis_length - 1);				
		}
		else
		{
			printf("There is nothing to read");
		}
		free(local_buff);
		free(dist_char);
	}

	else if(comparing_string(argv[1], "encrypt"))
	{
		if (argc < 4)
		{
			printf ("Error: the key file name has not been provided.\n");
		}
		
		printf("encryption is going on............");
	
		local_buff = reading_file(argv[2]);
		printf("File data is .........\n %s \n", local_buff);
		printf("Counting distinct charactre....");
		dist_char = dist_char_count(local_buff);
		dis_length = 0;
		if(dist_char != NULL)
		{
			printf("Distinct character is......\n%s\n", dist_char);
			while (dist_char[dis_length] != '\0')
			{
				dis_length++;
			}
			printf ("Number of distinct characters is:\t %d.\n", dis_length - 1);				
			//num_bits = find_bits_for_one_char (dis_length);
			//printf("required bits for each character is :\t %d \n", num_bits);
		
			FILE *fp_key;
			fp_key = fopen (argv[3], "w");
			fwrite(dist_char, dis_length, 1, fp_key);
			printf ("Key file has been written and saved. File name is %s.\n", argv[3]);
			fclose(fp_key);
			fflush(fp_key);
			ret_value = -1;
			ret_value = encrypt_file (argv[2], argv[3]);
			if (ret_value == 0)
			{
				printf ("File has been succefully encrypted.\n");
			}
			else if (ret_value == -1)
			{
				printf ("Error: File encryption has been failed.\n");
			}
			
		}
		else
		{
			printf("There is nothing to read\n");
		}
		free(local_buff);
		free(dist_char);
	}
	else if(comparing_string(argv[1], "decrypt"))
	{
		if (argc < 4)
		{
			printf ("Error: the key file name has not been provided.\n");
		}
		
		printf("Decryption is going on............");

		ret_value = -1;
		ret_value = decrypt_file (argv[2], argv[3]);
		if (ret_value == 0)
		{
			printf ("File has been succefully decrypted.\n");
		}
		else if (ret_value == -1)
		{
			printf ("Error: File decrypted has been failed.\n");
		}
			
		
		
	}
	else if (comparing_string (argv[1], "help"))
	{
		printf ("**************************************************************************************************************\n");
		printf ("Help command for the project.......\n");
		help_project ();
		printf ("**************************************************************************************************************\n");
	}
	else
	{
		printf("no operation like %s can be performed..\n", argv[1]);
	}
	return 0;
}
