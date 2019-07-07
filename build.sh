PROJECT_PATH="src"

INCLUDES="-Iinc"

gcc -c -Iinc $PROJECT_PATH/project.c
gcc -c -Iinc $PROJECT_PATH/help.c
gcc -c -Iinc $PROJECT_PATH/comp_srt.c
gcc -c -Iinc $PROJECT_PATH/write.c
gcc -c -Iinc $PROJECT_PATH/read_from_file.c
gcc -c -Iinc $PROJECT_PATH/distchar.c
gcc -c -Iinc $PROJECT_PATH/count_num_bits.c
gcc -c -Iinc $PROJECT_PATH/encrypt.c
gcc -c -Iinc $PROJECT_PATH/encryption4.c
gcc -c -Iinc $PROJECT_PATH/encryption2.c
gcc -c -Iinc $PROJECT_PATH/fd_index.c
gcc -c -Iinc $PROJECT_PATH/str_con.c
gcc -c -Iinc $PROJECT_PATH/encryption3.c
gcc -c -Iinc $PROJECT_PATH/encryption5.c
gcc -c -Iinc $PROJECT_PATH/encryption6.c
gcc -c -Iinc $PROJECT_PATH/encryption7.c
gcc -c -Iinc $PROJECT_PATH/encryption1.c
gcc -c -Iinc $PROJECT_PATH/decrypt.c
gcc -c -Iinc $PROJECT_PATH/decryption2.c
gcc -c -Iinc $PROJECT_PATH/decryption3.c
gcc -c -Iinc $PROJECT_PATH/decryption4.c
gcc -c -Iinc $PROJECT_PATH/decryption5.c
gcc -c -Iinc $PROJECT_PATH/decryption6.c
gcc -c -Iinc $PROJECT_PATH/decryption7.c

gcc -o project project.o help.o comp_srt.o write.o read_from_file.o distchar.o count_num_bits.o encrypt.o encryption4.o fd_index.o str_con.o encryption2.o encryption3.o encryption5.o encryption6.o encryption7.o encryption1.o decrypt.o decryption4.o decryption2.o decryption6.o decryption3.o decryption5.o decryption7.o




rm *.o
