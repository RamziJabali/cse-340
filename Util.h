//
// Created by Ramzi Jabali on 2/22/23.
//

#ifndef CSE_340_UTIL_H
#define CSE_340_UTIL_H

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Util {
    public:
    list<string> getTokensFromString();
    list<string> listOfTokens;
    list<string>::iterator itr;
};


#endif //CSE_340_UTIL_H
