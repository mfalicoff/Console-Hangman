#include "functions.h"
#include <iostream>

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

