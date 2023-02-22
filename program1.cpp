#include "program1.h"
#include "util.h"
#include <iostream>
#include <list>
#include <string>
#include <iterator>

using namespace std;

Util util = *new Util;
// Loads the grammar.
void LoadGrammar(char *grammarFileName) {
    list<string> list = util.getTokensFromString();
    util.itr = list.begin();
    for (util.itr; util.itr != list.end(); util.itr++) {
        cout << *util.itr << endl;
    }
}

// Returns a string with some statistics for the grammar.
char* GetStats() {
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
