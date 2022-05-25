#include <iostream>
#include<cmath>
using namespace std; 

int main()
{   
    float a;
    float p = 10000;
    float r = 0.1;
    for(int days =1; days<= 20; days++  ){
        a= p* pow(1+r,days);
        cout << days<<"-----"<<a<<endl;

    }
    
    return 0;
}