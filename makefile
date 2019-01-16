all:
	g++ -c main.cpp -o obj/main.o
	g++ -c sources/hwid.cpp -o obj/hwid.o
	g++ -c sources/sha256.cpp -o obj/sha256.o
	g++ -o hwid.exe obj/main.o obj/sha256.o obj/hwid.o --static