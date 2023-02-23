#include "program1.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/* You may use this file to test your program.
	This file will not be submitted, as a different test1.cpp will be used. */

int main(int argv, char **argc) {
    string temp = "ss.txt";
    char *tab2 = new char[temp.length()];
    strcpy(tab2, temp.c_str());
    LoadGrammar(tab2);
//    GetStats();
    return 0;
}