#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
extern void help_project();
extern int comparing_string(char *a, char *b);
extern int writing_file(char *file_name);
extern char *reading_file(char *file_name);
extern char * dist_char_count(char * local_buff);
extern int find_bits_for_one_char (int n);
extern int encrypt_file (char *file_name, char * key_file_name);
extern char * str_concatanate(char * str1, char * str2);
extern int find_index(char *key, char a);
extern int encrypt4_file (char *file_name, char *key_file);
extern int encrypt2_file (char *file_name, char *key_file);
extern int encrypt3_file (char *file_name, char *key_file);
extern int encrypt5_file (char *file_name, char *key_file);
extern int encrypt6_file (char *file_name, char *key_file);
extern int encrypt7_file (char *file_name, char *key_file);
extern int encrypt1_file (char *file_name, char *key_file);
extern int decrypt_file( char *file_name, char * key_file_name);
extern int decrypt2_file (char *file_name, char *key_file_name);
extern int decrypt3_file (char *file_name, char *key_file_name);
extern int decrypt4_file (char *file_name, char *key_file_name);
extern int decrypt5_file (char *file_name, char *key_file_name);
extern int decrypt6_file (char *file_name, char *key_file_name);
extern int decrypt7_file (char *file_name, char *key_file_name);
