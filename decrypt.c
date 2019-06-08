#include"project.h"

int decrypt_file( char *file_name, char * key_file_name)
{
	char * key_file_data;
	int i = 0;
	int num_bits;
	int ret_value;
	ret_value = -1;
	
	printf("Reading key file........\n");
	
	key_file_data = reading_file(key_file_name);
	while(key_file_data [i] != '\0')
	{
		i++;
	}

	num_bits = find_bits_for_one_char (i);

	printf("Required number of bits per character is %d . \n", num_bits);

	switch(num_bits)
	{
		case 0:
			printf("0 bit decryption.\n");
			printf("File is empty.\n");

		case 1:
			printf("1 bit decryption.\n");
			ret_value = -1;
//			ret_value = decrypt1_file (file_name , key_file_name);
			break;
		case 2:
                        printf("2 bit decryption.\n");
                        ret_value = -1;
  //                      ret_value = decrypt2_file (file_name , key_file_name);
                        break;
		case 3:
                        printf("3 bit decryption.\n");
                        ret_value = -1;
    //                    ret_value = decrypt3_file (file_name , key_file_name);
                        break;
		case 4:
                        printf("4 bit decryption.\n");
                        ret_value = -1;
                        ret_value = decrypt4_file (file_name , key_file_name);
                        break;
		case 5:
                        printf("5 bit decryption.\n");
                        ret_value = -1;
        //                ret_value = decrypt5_file (file_name , key_file_name);
                        break;
		case 6:
                        printf("6 bit decryption.\n");
                        ret_value = -1;
          //              ret_value = decrypt6_file (file_name , key_file_name);
                        break;
		case 7:
                        printf("7 bit decryption.\n");
                        ret_value = -1;
            //            ret_value = decrypt7_file (file_name , key_file_name);
                        break;
		case 8:
                        printf("8 bit decryption.\n");
                        printf("No need to decrypt.\n per character bits is 8.\n");
                        break;

		default:
			printf("%d bit decryption\n", num_bits);
			printf("Error: Invalid number of bits.\n");
	}
	
	return ret_value;
}	
