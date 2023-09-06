#ifndef RANDOMOLIO_H
#define RANDOMOLIO_H
#include <iostream>
#include <ctime>
using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play();

private:

    int lowestValue;
    int maxNumber;
    int playedGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();




protected:

};

#endif // RANDOMOLIO_H
