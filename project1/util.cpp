//
// Created by Ramzi Jabali on 2/22/23.
//

#include "Util.h"
#include <iostream>
#include <list>

using namespace std;

list<string> Util::getTokensFromLine() {
    listOfTokens.emplace_back("Ramzi");
    listOfTokens.emplace_back("Michel");
    listOfTokens.emplace_back("Alexus");

    return listOfTokens;
}
