#include <iostream>
using namespace std; 

template <class T>
class Bucky{
    T First,Second;
    public: 
        Bucky(T a, T b){
            First=a;
            Second=b;
        }
        T Bigger();
};

template <class T>

T Bucky <T>::Bigger(){
    return(First>Second?First:Second);
}

int main()
{
    Bucky <int> bo(27.54,65.5);
    cout<<bo.Bigger()<<endl;

    
    return 0;
}