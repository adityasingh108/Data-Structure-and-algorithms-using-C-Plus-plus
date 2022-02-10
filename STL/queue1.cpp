#include<iostream>
#include<queue>

using namespace std;

int main()
{
     // intilize a dyanmic Queue 
     queue<string> line_of_people;

     //add element in the stack

    line_of_people.push("1st  people");
    line_of_people.push("2nd people  ");
    line_of_people.push("3rd people");
    line_of_people.push("4th people");


    cout<< " the 1st element of the Queue is :" <<line_of_people.front()<<endl;

    cout<<"size of the queue is: "<<line_of_people.size()<<endl;
   
   
    int n= line_of_people.size();
    cout<<"Dipaly all the elements in the queue: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<line_of_people.front()<<endl;
        line_of_people.pop();
    }
    cout<<endl;


    cout<<"Check if the queue is empty or not: "<<line_of_people.empty()<<endl; 

}