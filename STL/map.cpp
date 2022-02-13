#include<iostream>
#include<map>

using namespace std;

int main(){

    // initialize the map with dynamic size

    map<int,string> name_roll;


    // insert key as well as value int map 

    name_roll.insert( {1,"Aditya"});
    name_roll.insert( {1,"Aditya"});
    name_roll[2] = "Mithu";
    name_roll[3] = "manish";
    name_roll[6] = "nigg";
    name_roll.insert({5, "Karan lauru"});
    name_roll[4] = "shukla";


    cout<<"Displaying the  name and roll number: " <<endl;

    for(auto i:name_roll){
        cout<<i.first << ".  "<<i.second<<endl;
    }


     // finding the element in the map 
     cout<< "Finding the element in the map : "<<name_roll.count(5) <<endl;

     // deleting the element from the map 
     name_roll.erase(5);
     // finding the element with  help of iterator 

     cout<<"Finding the element with  help of iterator:"<<endl;
    auto it = name_roll.find(1);
    for (auto i= it; i != name_roll.end(); i++){
        cout<<(*i).first << ". "<<(i)->second<<endl;
    }





}