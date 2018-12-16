#include <cctype>
#include <iostream>
#include <string>
using namespace std;

#include "parse.h"

string parseName()
{
    char alnum;
    string name = "";

    cin >> ws;
    while (isalnum(cin.peek()))
    {
        cin >> alnum;
        name += alnum;
    }
    return name;
}