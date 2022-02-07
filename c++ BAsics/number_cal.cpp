#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int num ,ans ,coin;
    cout <<"Enter the Amount you want to convert in 100 50 20 1"<<endl;
    cin >> num;
    cout<< "Enter the coin you want to convert"
    cin >>coin;

    switch(num >=100 ){
        case 100:
            int hun = num/100;
            cout<<hun<<endl;
            num  = num- hun*100;
            break;

    }
     switch(num >=50 ){
        case 50:
            int hun = num/100;
            cout<<hun<<endl;
            num  = num- hun*50;
            break;

    }
     switch(num >=1 ){
        case 1:
            int hun = num/100;
            cout<<hun<<endl;
            num  = num- hun*1;
            break;

    }

    

    
    return 0;
}