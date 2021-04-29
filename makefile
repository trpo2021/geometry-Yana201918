all: geometry.exe
geometry.exe: geometry.cpp
	g++ -o geomety.exe geometry.cpp
