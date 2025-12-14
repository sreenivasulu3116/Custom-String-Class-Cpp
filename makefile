myString:main.o friend.o
	c++ main.o friend.o -o myString
main.o:main.cpp header.h
	c++ -c main.cpp
friend.o:friend.cpp header.h
	c++ -c friend.cpp
clear:
	@echo "Cleaning up....."
	@rm -vr *.o
