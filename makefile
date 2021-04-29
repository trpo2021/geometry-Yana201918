all: geometry.exe
geometry.exe: geometry.cpp
	gcc -o geomety.exe geometry.cpp
