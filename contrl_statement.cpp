#include <iostream>
using namespace std; 

int main()
{
    int age ;
    cout<< "Enter your age "<<endl;
    cin >> age;

    if (age> 18){
        
        if (age > 60){
            cout << "You are going to die "<<endl;
        }else{
            cout<<"You are Fine"<<endl;
        }

    }else{
        cout<<"you are yonger "<<endl;
    }
    return 0;
}