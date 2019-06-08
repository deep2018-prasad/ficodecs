#include"project.h"


int decrypt4_file (char *file_name, char *key_file_name)
{
	char *key_file_data, *enc_data, *dec_data;

	key_file_data = NULL;
	enc_data = NULL;
	dec_data = NULL;

	int i, j;

	key_file_data = reading_file (key_file_name);

	printf("Key file data: \n %s\n", key_file_data);
	
	enc_data = reading_file (file_name);
	printf("Encrypted file data: \n %s \n", enc_data);

	i = 0; j=0;
	unsigned char temp_ch;

	int n;

	while(1)
	{
		temp_ch = temp_ch ^ temp_ch;
		temp_ch = enc_data[i];
		temp_ch = temp_ch >> 4;
		n = (int) temp_ch;
		if( n == 15)
		{
			break;
		}
		dec_data = realloc (dec_data, j+1);
		dec_data[j] = key_file_data[n];
		j++;
		
		temp_ch = temp_ch ^ temp_ch;
                temp_ch = enc_data[i];
                temp_ch = temp_ch << 4;
		temp_ch = temp_ch >> 4;
                n = (int) temp_ch;
                if( n == 15)
                {
                        break;
                }
                dec_data = realloc (dec_data, j+1);
                dec_data[j] = key_file_data[n];
                j++;
		i++;
	}

	dec_data[j] = '\0';
	printf("Decrypted data:\n %s \n", dec_data);

	char *file_name_dec;
	file_name_dec = str_concatanate (file_name, "-decrypted");

	FILE *fp_dec;
	
	fp_dec = fopen(file_name_dec, "w");
	free(file_name_dec);

	fwrite(dec_data, j, 1 , fp_dec);
	
	free(dec_data);
	fclose(fp_dec);
	fflush(fp_dec);
	
	return 0;
}
