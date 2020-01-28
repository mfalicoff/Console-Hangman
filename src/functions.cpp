#include "../include/functions.h"
#include <cstring>
#include <termios.h>
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;


bool cmpr(char* guess, string word){
    for(int i = 0; i < word.size(); i++){
        if(guess[i] != word[i])
            return 0;
    }
    return 1;
}

void print(){
    cout << endl;
    for(int i = 0; i < 10; i++){
        if(i==0){
             cout << "   ------------\n";
             cout << "   |          |\n";
        }
           
            
        
        if(i < 9 && i > 0)
            cout << "   |\n";
        else if(i == 9)
            cout << "___|";
    
    }
    cout << "___";
    cout << endl;

}

std::string wordInput(){
    cout << "Enter Word: "; //TODO Dictionary INPUT
    
    
    

    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    string word;
    getline(cin, word);
    return word;
    
}

int init(){
    
    cout << "Hello, welcome to my hangman game.\n";
    cout << "You will have the choice of playing single player against the computer, or against a foe.\n";
    cout << "What will you choose:\n";
    cout << "   1. Play aginst foe.\n";
    cout << "   2. PLay against computer.\n";
    print();
    cout << "Play: ";
    string choice;
    getline(cin, choice);
    if(choice == "1")
        return 1;
    else if(choice == "2")
        return 2;
    else{
        
        do{
            /* code */
            cout << "Incorrect Input, try Again: ";
            getline(cin, choice);

        } while (choice != "1" && choice != "2" );
        
    }
    
}

void isLetterInWord(char* blank, int nbWrongGuesses, std::string word, char guess){

    if(word.find(guess) != string::npos){
            for(int i = 0; i < word.size()+1; i++){
                if((blank[i] == '_')){
                    blank[i] = guess;
                    break;
                }
            
            }


        }
        else{
            nbWrongGuesses++;
}

