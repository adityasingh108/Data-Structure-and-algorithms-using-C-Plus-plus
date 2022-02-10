#include<iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    // prority queue defalut create as max heap 
    
    priority_queue<int> maxi;

    // create min heap 

    priority_queue<int ,vector<int>,greater<int> > mini;


    // insertion of min heap as weel as ma heap

    mini.push(5);
    mini.push(4);
    mini.push(2);
    mini.push(7);
    mini.push(15);



    maxi.push(5);
    maxi.push(4);
    maxi.push(2);
    maxi.push(7);
    maxi.push(15);


    cout<<"Display the min heap: "<<endl;
    int n = mini.size();
     
    for (int i = 0; i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    cout<<"Display the max  heap: "<<endl;
    int m = maxi.size();

    for (int i = 0; i<m; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
}