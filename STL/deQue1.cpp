#include<iostream>
#include <deque>
using namespace std;

int main()
{
    //initialize the blank deque
    deque<int> d;
    //  Insertion in deque from front and back

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    d.push_front(9);
    d.push_front(8);
    d.push_front(7);

    
    // Display the element in the Queue

    for(int i:d){
        cout<< i <<" ";
    }
    cout<<endl;
    cout<<"the First element in the deque  "<<d.front()<<endl;
    cout<<"the last element in the deque  "<<d.back()<<endl;


    cout<<"empty  of the deque is "<<d.empty()<<endl;
    cout<<"size of the deque is "<<d.size()<<endl;

    // check if the element present in the  index of deque 

    cout<<"check the 2nd indexwhich element is present    "<<d.at(2)<<endl;

    // delet the last element 
d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }
    
    cout<<endl;

    // delet the deque 
    d.erase(d.begin(),d.end());
    cout<<"empty  of the deque is "<<d.empty()<<endl;
}