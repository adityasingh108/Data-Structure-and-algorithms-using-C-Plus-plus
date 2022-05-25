#include <iostream>
using namespace std; 


// // default argument parameter 

// int volume(int l = 1,int b =1,int h =1){
//     return l*b*h;
// }

// // Function overloading

// void printNAme(int x){
//     cout<<"The intenger value "<< x<<endl;
// }
// void printNAme(float x){
//     cout<<"The float value "<< x<<endl;
// }


int main()
{
    int n = 5 , k , f1, f2, f;
    if(n< 2)
        return n;
    else{
        f1 = f2= 1; 
        for(k = 2; k<n; k++){
            f = f1+f2;
            f2 = f1;
            f1 = f;

        }
        cout<<f;
    }    
    
}