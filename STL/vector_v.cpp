#include<iostream>
#include <vector>
using namespace std; 

int main()
{   
    // assign the vector 
    vector<int> v;
    // size of the element
    cout<<v.size()<<endl;

    // insert the elment inthe vector
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(10);
    v.push_back(20);

    // Display the element in the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< "  ";
    }
    cout<<endl;


    // print the  1st element and lastss
    cout<<"the First element in the vector  "<<v.front()<<endl;
    cout<<"the last element in the vector  "<<v.back()<<endl;


    cout<<"capacity of the vector is "<<v.capacity()<<endl;
    cout<<"size of the vector is "<<v.size()<<endl;

    // check if the element present in the  index of vector 

    cout<<"check the 2nd indexwhich element is present    "<<v.at(2)<<endl;

    // delet the last element 
    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

//    v.clear();
    // assign the vector with size of 20 and value of all elent is zero
    vector<int> hashTable(20,0);

    cout<<"print the hash table "<<endl;
   for(int i:hashTable){
        cout<<i<<" ";
    }
    cout<<endl;



    // copy the existing vector into new  vector 
   cout<<"The new vector "<<endl;
    vector<int> new_vector(v);
    for(int i:new_vector){
        cout<<i<<" ";
    }
    cout<<endl;



    
    return 0;
}