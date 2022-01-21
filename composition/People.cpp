#include <iostream>
using namespace std;
#include "People.h"
#include "Birthday.h"

People::People(string x, Birthday ob)
    : name(x), dateOfBirth(ob)
{
}

void People::printInfo()
{
    cout << name << "Born at ";
    dateOfBirth.printDate();
}