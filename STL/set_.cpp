#include<iostream>
#include<set>
using namespace std; 

int main()
{
    // intilize the  synamic set
    set<int> s;

    // insertion of the element in the set 

    s.insert(8);
    s.insert(6);
    s.insert(9);
    s.insert(9);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(1);

    cout<<"Diaplay the elements in the set :"<<endl;

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"check element 5 is present or not:"<<s.count(5)<<endl;
    cout<<"check element 0 is present or not:"<<s.count(0)<<endl;
     
    // delet the elements from the set

    set<int>::iterator it = s.begin();
    it ++;
    s.erase(it); 

    cout<<"after deleting "<<endl;

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;


    // find the element in the set

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end();it++)
    {
        cout<<*it<<" ";
    }
    

    return 0;
}