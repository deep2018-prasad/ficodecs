# This is the make file of the src

#dependencies
CXX = gcc
INCLUDES= -I../inc
CXXFLAGCOMPILE = -c
CXXFLAGLINK = -o
CXXFLAGDEBUG = -g -c
CXXFLAGALL = -g -o
ELF = ficodecs


#Target
FILES = comp_srt.c decryption4.c encrypt.c encryption5.c count_num_bits.c decryption5.c encryption1.c encryption6.c project.c decrypt.c decryption6.c encryption2.c encryption7.c read_from_file.c decryption2.c decryption7.c encryption3.c fd_index.c str_con.c decryption3.c distchar.c encryption4.c help.c write.c


#Rules

compile:
	$(CXX) $(INCLUDES) $(CXXFLAGCOMPILE) $(FILES)

link:
	$(CXX) $(CXXFLAGLINK) $(ELF) *.o
debug:
	$(CXX) $(INCLUDES) $(CXXFLAGDEBUG) $(FILES)
all:
	$(CXX) $(INCLUDES) $(CXXFLAGALL) $(ELF) $(FILES)

clean:
	rm -rf *.o
	rm $(ELF)


