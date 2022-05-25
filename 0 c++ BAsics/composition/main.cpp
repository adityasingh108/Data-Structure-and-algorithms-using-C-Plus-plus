#include <iostream>
using namespace std;
#include<string>
#include "Birthday.h"
#include "People.h" 

int main()
{
  Birthday birthdayobj(14,8,2001);
  
  People peopleObject("Aditya",birthdayobj);
  peopleObject.printInfo();
}