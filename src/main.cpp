#include <iostream>
#include <string>
#include <cstring>
#include <termios.h>
#include <unistd.h>
#include "functions.h"


using namespace std;

//TODO: Put everything in different files
//TODO: UI


int main(){

    

    //cout << "Enter Word: "; //TODO Dictionary INPUT
    void print();
    
    

    // termios oldt;
    // tcgetattr(STDIN_FILENO, &oldt);
    // termios newt = oldt;
    // newt.c_lflag &= ~ECHO;
    // tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // string word;
    // getline(cin, word);
    // system("clear");
    // //Initialise blank char array that will be the players current word construction
    // char blank[word.size()-1];
    // for (int i = 0; i < word.size(); i++) {
    //     blank[i] = '_';
    // }
    // cout << word.size() <<"\n";

    
    // for(int i = 0; i < word.size(); i++)
    //     cout << '_';

    // cout << endl;
    // bool test = 0;
    // int nbWrongGuess = 0;


    // while(!test){
    //     char guess;
    //     cout << "Enter guess: ", cin >> guess;
        
    //     //cout << word.find(guess);
    //     if(word.find(guess) != string::npos){
    //         for(int i = 0; i < word.size()+1; i++){
    //             if((blank[i] == '_')){
    //                 blank[i] = guess;
    //                 break;
    //             }
            
    //         }


    //     }
    //     else{
    //         nbWrongGuess++;
    //     }

    //     cout << " " << "number of guesses " << nbWrongGuess << " ";

    //     for (int i = 0; i < word.size(); i++)
    //     {
    //         /* code */
    //         cout << blank[i];
    //     }
        
    //     cout << endl;

    //     if(nbWrongGuess == 6){
    //         cout << "You Lose.\n";
    //         test = 1;
    //     } else if(cmpr(blank, word)){
    //         cout << "You win\n"; 
    //     }

            
         
    //     }
            
}

