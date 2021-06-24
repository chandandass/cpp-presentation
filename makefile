all:
	g++ $(fname).cpp -o $(fname)
	./$(fname)

clean:
	rm *.exe