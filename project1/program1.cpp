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
    ifstream grammarFile(grammarFileName);
    string file;
    if(grammarFile.is_open()){
        grammarFile >>file;
        cout << file;
    }
//    cout <<grammarFileName;
//    util.getTokensFromLine();
}

// void LoadGrammar(char *grammarFileName) {
//    tokenList = util.getTokensFromLine();
//    for (util.itr = tokenList.begin(); util.itr != tokenList.end(); ++util.itr)
//        cout<< *util.itr;
//    cout << '\n';
//}

// Returns a string with some statistics for the grammar.
char* GetStats() {
    for (util.itr = tokenList.begin(); util.itr != tokenList.end(); ++util.itr)
        cout << '\t' << *util.itr;
    cout << '\n';
    return "";
}

// Returns the first sets of all nonterminals.
char* GetFirstSets() {
    return "";
}

// Returns the first set of the specified nonterminal.
char* GetFirstSet(char *nonTerminal) {
    return "";
}

// Returns the follow sets of all nonterminals.
char* GetFollowSets() {
    return "";
}

// Returns the follow set of the specified nonterminal.
char* GetFollowSet(char *nonTerminal) {
    return "";
}
