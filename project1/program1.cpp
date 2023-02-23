#include "program1.h"
#include "util.h"
#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

Util util = *new Util;
list<string> tokenList;

// Loads the grammar.
void LoadGrammar(char *grammarFileName) {
    cout << grammarFileName << endl;
    string line, storeString;
//    ifstream myFile;
//    myFile.open(grammarFileName);
//    if (myFile.is_open()) {
//        while ( myFile ) {
//            getline(myFile,line);
//            cout << line;
//        }
//    } else cout << "Unable to open file";
//    myFile.close();

    ifstream newfile;
    newfile.open(line, ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) {   //checking whether the file is open
        while (getline(newfile, storeString)) {
            cout << storeString;
        }
        newfile.close(); //close the file object.
//    cout <<grammarFileName;
//    util.getTokensFromLine();
    } else{ cout << "can't open file";}
}

// void LoadGrammar(char *grammarFileName) {
//    tokenList = util.getTokensFromLine();
//    for (util.itr = tokenList.begin(); util.itr != tokenList.end(); ++util.itr)
//        cout<< *util.itr;
//    cout << '\n';
//}

// Returns a string with some statistics for the grammar.
char *GetStats() {
    for (util.itr = tokenList.begin(); util.itr != tokenList.end(); ++util.itr)
        cout << '\t' << *util.itr;
    cout << '\n';
    return "";
}

// Returns the first sets of all nonterminals.
char *GetFirstSets() {
    return "";
}

// Returns the first set of the specified nonterminal.
char *GetFirstSet(char *nonTerminal) {
    return "";
}

// Returns the follow sets of all nonterminals.
char *GetFollowSets() {
    return "";
}

// Returns the follow set of the specified nonterminal.
char *GetFollowSet(char *nonTerminal) {
    return "";
}
