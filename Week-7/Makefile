main.o: main.cpp
	g++ src/linenumber.cpp src/readingcsv.cpp src/Days/Weekdays.cpp src/Days/Weekends.cpp src/interpretingcsv.cpp main.cpp
	git commit -a -m "updates"
	git push
	./a.out

programout: main.o
	g++ main.o -o programout