#include <iostream>
using namespace std; 

// void sum(int a ,int b){
//     int sum ;
//     sum = a+b;
//     cout << "the addition is :"<<sum<<endl;

// }

// default argument parameter 

int volume(int l = 1,int b =1,int h =1){
    return l*b*h;
}



int main()
{
    // sum(4,6);
    
    cout<<volume(5,5,5)<<endl;
}