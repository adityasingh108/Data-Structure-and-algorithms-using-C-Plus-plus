#include <iostream>
#include "Hanaah.h"
using namespace std;

Hanaah::Hanaah(int num)
    : h(num)
{
}
void Hanaah::printCrap()
{
    cout << "h" << h << endl;
    cout << "this->h = " << this->h << endl;
    cout << "(*this).h" << (*this).h << endl;
}