#include<iostream>
#include<stack>

using namespace std;

int main()
{
     // intilize a dyanmic stack 
     stack<string> plate;

     //add element in the stack

    plate.push("1st plate");
    plate.push("2nd  plate");
    plate.push("3rd plate");
    plate.push("4th plate");


    cout<<plate.top()<<endl;

    cout<<"size of the stack is "<<plate.size()<<endl;
   
   
    int n= plate.size();
    cout<<"Dipaly all the elements in the stack"<<endl;
    for(int i = 0; i<n; i++){
        cout<<plate.top()<<endl;
        plate.pop();
    }
    cout<<endl;


    cout<<"Check if the stack is empty or not   "<<plate.empty()<<endl; 

}