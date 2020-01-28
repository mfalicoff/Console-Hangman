#include <iostream>
#include <string>
#include <cstring>
#include <termios.h>
#include <unistd.h>

int game();

bool cmpr(char* guess, std::string word);
void print();
std::string wordInput();
int init();
void isLetterInWord(char* blank, int nbWrongGuesses, string word, char guess);