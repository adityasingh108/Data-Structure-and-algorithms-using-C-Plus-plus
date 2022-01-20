#include <iostream>
using namespace std; 

int main()
{   int x =1;
    int number;
    int total = 0;
    while (x<=5){
        cin >> number;
        total = total+number;
        x++;


    }
    cout<<"the Total number is :"<<total<<endl;
    return 0;
}