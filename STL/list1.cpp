#include<iostream>
#include <list>
using namespace std;

// it is derived from linked list
int main(){

    // initializ list  with  dynamic size
    list<int> l;

    // initializ list  with  static size
    list<int> static_list(5,100);

    // insert the element in the list 
    l.push_back(1);
    l.push_back(2);

    l.push_front(3);
    l.push_front(4);

    // display the elements in the list

    for(int i:l){
        cout<<i<<" ";

    }cout<<endl;

   cout<< " diplay static list"<<endl;
   for(int i:static_list){
        cout<<i<<" ";

    }cout<<endl;


    cout<<"the First element in the list  "<<l.front()<<endl;
    cout<<"the last element in the list  "<<l.back()<<endl;


    // cout<<"capacity of the list is "<<l.capacity()<<endl;
    cout<<"size of the list is "<<l.size()<<endl;





}