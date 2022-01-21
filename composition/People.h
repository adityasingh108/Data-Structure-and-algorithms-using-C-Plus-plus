#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "Birthday.h"
using namespace std;

class People {
    public:
        People(string x,Birthday ob);
        void printInfo();
    private:
        string name;
        Birthday dateOfBirth;    
};
#endif