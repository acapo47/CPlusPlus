game: Player.o Game.o
	g++ Dice.o Player.o Game.o -o game

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

Dice.o: Dice.cpp Dice.h
	g++ -c Dice.cpp

Game.o: Game.cpp Player.h
	g++ -c Game.cpp

