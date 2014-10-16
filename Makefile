.PHONY: compile clean run

compile: bin/main
	
bin/main:
	mkdir -p bin
	g++ -o $@ main.cpp -std=c++11

clean:
	rm -rf bin output
	
run:
	./bin/main