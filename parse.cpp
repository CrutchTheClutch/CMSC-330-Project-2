#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in)
{
    char alnum;
    string name = "";

    in >> ws;
    while (isalnum(in.peek()))
    {
        in >> alnum;
        name += alnum;
    }
    return name;
}