#include <iostream>
#include <string>
#include <cstring>
#include <termios.h>
#include <unistd.h>
#include "../include/functions.h"

using namespace std;

int game(){

    int gameChoice = init();
    string word = wordInput();

    if(gameChoice == 1){
        
    }
    
    
    //Initialise blank char array that will be the players current word construction

    char blank[word.size()-1];
    for (int i = 0; i < word.size(); i++) {
        blank[i] = '_';
    }
    cout << word.size() <<"\n";

    
    for(int i = 0; i < word.size(); i++)
        cout << '_';

    cout << endl;
    bool test = 0;
    int nbWrongGuess = 0;


    while(!test){
        char guess;
        cout << "Enter guess: ", cin >> guess;
        
        //cout << word.find(guess);

        
        
        isLetterInWord(blank, nbWrongGuess, word, guess);

        cout << " " << "number of guesses " << nbWrongGuess << " ";

        for (int i = 0; i < word.size(); i++)
        {
            /* code */
            cout << blank[i];
        }
        
        cout << endl;

        if(nbWrongGuess == 6){
            cout << "You Lose.\n";
            test = 1;
        } else if(cmpr(blank, word)){
            cout << "You win\n"; 
            test = 1;
        }

            
         
        }

    return 1;
}