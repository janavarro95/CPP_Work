#This is a comment line!
#-a is used if we want to have our program compile to a name other than the default a.out
#-c is used to gather up all .h and .cpp tiles and links them into an .o (object file)
#-o takes all of the .o (object files) and combines them into a executable file!

#This is our program name or the .exe file we are creating.
ProgramName = SimpleMath.exe

#This runs all of the commands!
all: make

#-Wall allows us to see all warnings when compiling.
#Using the * allows us to use the wildcard symbol which grabs all files matching that paramater.
#Basically *.o will grab all files with .o as part of their name and grab all .cpp files for *.cpp
make: compile
	g++ -Wall -o $(ProgramName) *.o

compile:
	g++ -c *.cpp

clean:
	rm *.o
	rm *.exe

run:
	./$(ProgramName)
