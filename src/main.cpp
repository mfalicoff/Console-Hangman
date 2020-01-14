#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){


    string word;
    cout << "Enter Word: ", cin >> word; //TODO Dictionary INPUT


    //Initialise blank char array that will be the players current word construction
    char blank[word.size()+1];
    for (int i = 0; i < word.size(); i++) {
        blank[i] = '_';
    }
      

    
    for(int i = 0; i < word.size(); i++)
        cout << '_';
    cout << endl;
    bool test = 0;
    int guess = 0;
    while(!test){
        char guess;
        cout << "Enter guess: ", cin >> guess;

        //cout << word.find(guess);
        if(word.find(guess) != string::npos){
            for(int i = 0; i < word.size()+1; i++){
                if((blank[i] == '_')){
                    blank[i] = guess;
                    break;
                }
            
            }


        }
        else{
            guess++;
        }

        for (int i = 0; i < word.size(); i++)
        {
            /* code */
            cout << blank[i];
        }
        
        

        if(blank == word)
            test = 1;
    }

}