#include "randomolio.h"



Game::Game(int maxVlue)
{

    maxNumber = maxVlue;
    cout<<"GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maxium value"<< endl;


}

Game::~Game()
{
   cout<<"GAME DESTRUCTOR: object cleared from stack memory" <<endl;

}

void Game::play()
{
    lowestValue = 1;
    srand(time(0));
    randomNumber = rand()%(maxNumber - lowestValue + 1) + lowestValue;
    numOfGuesses=0;
    do {
               // Kysytaan pelaajan arvaus
               cout<<"Give your guess between 1-"<< maxNumber << endl;
               cin >> playedGuess;

               numOfGuesses++; //lasketaan yritykset

               // Tarkistetaan arvaus
               if (playedGuess < lowestValue || playedGuess > maxNumber) {
                   cout << "Your answer is not between" << lowestValue <<"and" << maxNumber << endl;
               } else if (playedGuess < randomNumber) {
                   cout << "Your answer is too small." << endl;
               } else if (playedGuess > randomNumber) {
                   cout << "Your answer is too big." << endl;
               } else {
                   cout << "Your guess is right = " << randomNumber << "." << endl;
                   printGameResult();
               }
           } while (playedGuess != randomNumber);




}

void Game::printGameResult()
{

    cout <<" You guessed the right answer " << randomNumber << " with " << numOfGuesses <<  endl;

}
