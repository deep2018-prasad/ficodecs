//last character is 11
//This file is going at github

#include"project.h" 
int encrypt2_file (char * file_name, char * key_file)
{
	char *enc_file_name;
	char * file_data;
	file_data = reading_file (file_name);
	char * key_file_data;
	
	key_file_data = reading_file(key_file);
	
	int i, j, k;
	unsigned char file_ch, temp_ch;
	
	i = 0;
	j = 0;	
	k = 0;
	int n;
	n = 0;
	
	enc_file_name = str_concatanate (file_name, "_encrypted");
	int fd;
	fd = open(enc_file_name,O_CREAT | O_RDWR);
	
	while(1)
	{
		file_ch = file_ch ^ file_ch;
		temp_ch = temp_ch ^ temp_ch;
		n = find_index (key_file_data, file_data[i]);
		temp_ch = (unsigned char) n;
		temp_ch = temp_ch << 6;
		file_ch = file_ch | temp_ch;
		i++;
		
		if(file_data[i] == '\0')
		{
			temp_ch = temp_ch ^ temp_ch;
			temp_ch = (unsigned char) 3;
			temp_ch = temp_ch << 6;
			temp_ch = temp_ch >> 2;
			file_ch = file_ch | temp_ch;
			write( fd, &file_ch, 1);
			file_ch = file_ch ^ file_ch;
			break;
		}
		n = find_index (key_file_data, file_data[i]);
		temp_ch = temp_ch ^ temp_ch;
		temp_ch = (unsigned char) n;
		temp_ch = temp_ch << 6;
		temp_ch = temp_ch >> 2;
		file_ch = file_ch | temp_ch;
		write( fd, &file_ch, 1);
		i++;
		
		if(file_data[i] == '\0')
		{
			temp_ch = temp_ch ^ temp_ch;
			temp_ch = (unsigned char)3;
			temp_ch = temp_ch << 6;
			temp_ch = temp_ch >> 4;
			file_ch = file_ch | temp_ch;
			write(fd, &file_ch, 1);
			file_ch = file_ch ^ file_ch;
			break;
		}
		
		n = find_index (key_file_data, file_data[i]);
		temp_ch = temp_ch ^ temp_ch;
                temp_ch = (unsigned char) n;
                temp_ch = temp_ch << 6;
                temp_ch = temp_ch >> 4;
                file_ch = file_ch | temp_ch;
                write( fd, &file_ch, 1);
                i++;
		
		if(file_data[i] == '\0')
                {
                        temp_ch = temp_ch ^ temp_ch;
                        temp_ch = (unsigned char)3;
                        temp_ch = temp_ch << 6;
                        temp_ch = temp_ch >> 6;
                        file_ch = file_ch | temp_ch;
                        write(fd, &file_ch, 1);
                        file_ch = file_ch ^ file_ch;
                        break;
                }
		
		n = find_index (key_file_data, file_data[i]);
		temp_ch = temp_ch ^ temp_ch;
                temp_ch = (unsigned char) n;
                temp_ch = temp_ch << 6;
                temp_ch = temp_ch >> 6;
                file_ch = file_ch | temp_ch;
                write( fd, &file_ch, 1);
                i++;

		  if(file_data[i] == '\0')
                {
                        temp_ch = temp_ch ^ temp_ch;
                        temp_ch = (unsigned char)3;
                        temp_ch = temp_ch << 6;
                        file_ch = file_ch | temp_ch;
                        write(fd, &file_ch, 1);
                        file_ch = file_ch ^ file_ch;
                        break;
                }
	}
	free (file_data);
	free (key_file_data);
	printf ("--------------------------------------------------------------------------------------------------------------\n");
	free (enc_file_name);
	chmod (enc_file_name, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	close(fd);
	return 0;
	
				
}
