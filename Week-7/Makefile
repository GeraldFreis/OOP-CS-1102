main.o: main.cpp
	g++ src/linenumber.cpp src/readingcsv.cpp src/interpretingcsv.cpp main.cpp
	git commit -a -m "updates"
	git push
	./a.out

programout: main.o
	g++ main.o -o programout