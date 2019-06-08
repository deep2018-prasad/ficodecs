#include"project.h"
int encrypt_file (char * file_name, char * key_file_name)
{
	char * key_file_data;

	key_file_data = reading_file (key_file_name);
	int i;
	i = 0;
	while (key_file_data[i] != '\0')
	{
		i++;
	}
	int d_char_count = i;
	int ret_value;
	
	int num_bits = find_bits_for_one_char (d_char_count);
	printf ("Required number of bits per character is %d | d_char_count = %d.\n", num_bits, d_char_count);
	free (key_file_data);
	
	switch(num_bits)
	{
		case 0:
			printf( "0 bit encryption\n");
			printf("FILE data is empty\n");
			break;		
		
		case 1:
			printf ("1 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt1_file(file_name, key_file_name);
			break;
		
		case 2:
			printf ("2 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt2_file(file_name, key_file_name);
			break;

		case 3:
			printf ("3 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt3_file(file_name, key_file_name);
			break;

		case 4:
			printf ("4 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt4_file(file_name, key_file_name);
			break;

		case 5:
			printf ("5 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt5_file(file_name, key_file_name);
			break;

		case 6:
			printf ("6 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt6_file(file_name, key_file_name);
			break;	

		case 7:
			printf ("7 bit encryption\n");
			ret_value = -1;
			ret_value = encrypt7_file(file_name, key_file_name);
			break;
	
		case 8:
			printf ("8 bit encryption\n");
			printf ("No need to encrypt.\nPer chatarer bits is 8.\n");
			break;

		default:
			printf ("%d bit encryption\n", num_bits);
			printf ("Error: Invalid number of bits.\n");
			break;
	}
	return ret_value;
}
