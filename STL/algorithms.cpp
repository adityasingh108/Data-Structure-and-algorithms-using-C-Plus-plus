#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(11);

    cout << " searching the  element 2 in the vector  : "<<binary_search(arr.begin() ,arr.end() , 2) <<endl;
    cout << " searching the  element 12 in the vector: "<<binary_search(arr.begin() ,arr.end() , 12) <<endl;

     cout<<"Lower Bound :"<<lower_bound(arr.begin() ,arr.end(),3 ) - arr.begin()<<endl;
     cout<<"Upper Bound :"<<upper_bound(arr.begin() ,arr.end(),3 ) - arr.begin()<<endl;



   cout<<"return the max element a= 10 b = 20 ::  "<<max(10,20)<<endl;  
   cout<<"return the min element a= 10 b = 20 ::  "<<min(10,20)<<endl;  

    int a = 10 ,b = 20;
    cout<<"Before swapping"<<endl;
    cout<<a <<" "<<b<<endl;
    swap(a,b);  
    cout<<"After swapping"<<endl;
    cout<<a<<" "<<b<<endl;


    // reverse the string 

    string s = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    cout<<"Before  the reversing the element :"<<s <<endl;
    reverse(s.begin(),s.end());
    cout<<"After the reversing the element :"<<s<<endl;

    // rotate the array 
    cout<<"Before  the rotating  the array :"<<endl;
    for(int i:arr){
      cout<<i<<"  ";
    }cout<<endl;
    rotate(arr.begin(),arr.begin()+1 ,arr.end());

    cout<<"After  the rotating  the array :"<<endl;
    for(int i:arr){
      cout<<i<<"  ";
    }cout<<endl;


  sort(arr.begin(),arr.end());
  cout<<"After  the sorting   the array :"<<endl;
  for(int i:arr){
    cout<<i<<" ";
  }cout<<endl;
  

}