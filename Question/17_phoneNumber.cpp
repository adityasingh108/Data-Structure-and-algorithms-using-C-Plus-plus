#include<bits/stdc++.h>
using namespace std; 


 void letterCombinations() {
         
        map<int,string> tel_dir;


        tel_dir.insert({1,""});
        tel_dir.insert({2,"abc"});
        tel_dir.insert({3,"def"});
        tel_dir.insert({4,"ghi"});
        tel_dir.insert({5,"jkl"});
        tel_dir.insert({6,"mno"});
        tel_dir.insert({7,"pqrs"});
        tel_dir.insert({8,"tuv"});
        tel_dir.insert({9,"wxyz"});

        for(auto a:tel_dir)    
          cout<<a.first<<".  " <<a.second <<endl;



 }        

int main()
{  
    letterCombinations();
    
    return 0;
}