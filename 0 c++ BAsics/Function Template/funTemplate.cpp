#include <iostream>
using namespace std; 

/*
template<class T> //function temlate single parameter
T add(T x ,T y){
    return x+y;
}

*/

template <class FIRST,class SECOND>

FIRST Smaller(FIRST a,SECOND b){
    return(a<b?a:b);
}

int main()
{
    double a = 5;
    double b = 450.56;
    // cout<<add(a, b)<<endl;
    cout<<Smaller(a,b)<<endl;
    return 0;
}