testall: tests

tests: programoutput
	./programoutput

programoutput: game.h game.cpp window.h window.cpp game_testing.cpp
	g++ window.cpp game.cpp game_testing.cpp -lncurses -lform -o programoutput
