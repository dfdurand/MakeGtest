CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = -lgtest -lgtest_main -pthread

# $@->  get target name 
# $^->  get all dependecies

program: main.o functions.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ 
	echo "create program exec"

program_test: test_main.o test_functions.o functions.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	echo "create program_test exec"

main.o: src/main.cpp
	g++ -c src/main.cpp 

functions.o: src/functions.cpp
	g++ -c src/functions.cpp 

test_functions.o: test/test_functions.cpp
	g++ -c test/test_functions.cpp

test_main.o: test/test_main.cpp
	g++ -c test/test_main.cpp 

run: program
	./program

delete:
	rm program program_test
	
test: program_test
	./program_test

clean:
	rm *.o