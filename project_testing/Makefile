testall: tests

tests: programoutput
	./programoutput

programoutput: gamefiles.o blackjack.o windowfiles.o
	g++ game_testing.cpp -lncurses -lform -o programoutput

gamefiles.o: game.h game.cpp windowfiles.o blackjack.o
	g++ game.cpp -lncurses -lform -o gamefiles.o

blackjack.o: blackjack.h blackjack.cpp bet.h bet.cpp
	g++ blackjack.cpp bet.cpp -lncurses -lform -o blackjack.o

windowfiles.o: window.h window.cpp
	g++ window.cpp -lncurses -o windowfiles.o
