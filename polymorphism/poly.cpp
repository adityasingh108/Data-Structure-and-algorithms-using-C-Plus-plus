#include <iostream>
using namespace std; 


// in this section we  will know about the polymorphism as weel the virtual function and pure virtual function
// when any class cnduct a pure vitrual unction this clas  is name s the abstract class

class Enemy{
    public:
        virtual void attack(){
            cout<<"THis is virtual function and attack "<<endl;
        } 
        // this is virtual function
        // virtual void attack() = 0; // this is virtual function

};
class Ninja:public Enemy{
    public: 
        void attack(){
            cout<<"I am ninja i can chop off you"<<endl;
        }
};
class Monster:public Enemy{
    public: 
        void attack(){
            cout<<"I am Monster i can eat you"<<endl;
        }
};
int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1 ->attack();
    enemy2 ->attack();
    return 0;
}