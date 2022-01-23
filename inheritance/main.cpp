#include <iostream>
using namespace std; 

class Mother{
        public:
            Mother(){
                cout<<"Iam mother constructor"<<endl; // mother constructor
            }
            void saySomething(){
                cout<<"hello MR aditya"<<endl;
            }
        //    int publicVar; 
         ~Mother(){
                cout<<"Iam mother destructor"<<endl; // mother deconstructor
            }  
        // protected:
        //          int protectedVAr;
        // private:
        //     int privateVar;           
};  

class Daughter: public Mother{
    public:
        Daughter(){
                cout<<"Iam daughter constructor"<<endl; // daughter constructor
            }
        // void hi(){
        //     cout<<"I am daughet classs "<<endl;
        // }
        // ~Daughter(){
        //         cout<<"Iam daughter deconstructor"<<endl; // daughter deconstructor
        //     }
        // void doSome(){
        //     publicVar = 45;
        //     protectedVAr = 889;
        //     // privateVar = 45635;
        //     cout<<publicVar<<endl;
        //     cout<<protectedVAr<<endl;
        //     cout<<privateVar<<endl;
        // }

};

int main(){
    Mother mom;
    // mom.saySomething();

    Daughter tina;
    // tina.saySomething();
    // tina.hi();
    // tina.doSome();
}
