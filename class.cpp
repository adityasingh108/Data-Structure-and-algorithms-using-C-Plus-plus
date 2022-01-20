#include <iostream>
// include string so we can use string 
#include <string>
using namespace std; 
//create a class with access specifire with public so we can use it outside the class

class Adclass{
    public:
        void setName(string s){
            name = s;
        }
        string getName (){
            return name;
        }
    private:
        string name;
};


// thsi is normal class with public accesifire 
// class Adclass{
//     public:
//         void print_name(){
//             cout << "This is worKing"<<endl;
//         }
// };

int main()
{
    // Adclass adobject;
    // adobject.print_name();
    Adclass adobject;
    adobject.setName("This is working");
    cout<<adobject.getName()<<endl;
    return 0;
}