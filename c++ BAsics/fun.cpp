#include <iostream>
using namespace std; 


// default argument parameter 

int volume(int l = 1,int b =1,int h =1){
    return l*b*h;
}

// Function overloading

void printNAme(int x){
    cout<<"The intenger value "<< x<<endl;
}
void printNAme(float x){
    cout<<"The float value "<< x<<endl;
}


int main()
{
    // sum(4,6);
    
    // cout<<volume(5,5,5)<<endl;
    int a = 45;
    float b = 45.3;

    printNAme(a);
    printNAme(b);
}