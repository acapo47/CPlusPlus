all: encrypt decrypt

encrypt: encrypt.o crypter.o rotors.o
	g++ encrypt.o crypter.o rotors.o -o encrypt

decrypt: decrypt.o crypter.o rotors.o
	g++ decrypt.o crypter.o rotors.o

encrypt.o: encrypt.cpp crypter.h
	g++ -c encrypt.cpp

decrypt.o: decrypt.o crypter.h
	g++ -c decrypt.cpp

rotors.o: rotors.cpp rotors.h
	g++ -c rotors.cpp

crypter.o: crypter.cpp crypter.h
	g++ -c crypter.cpp

clean:
	rm *.o encrypt
	rm *.o decrypt
