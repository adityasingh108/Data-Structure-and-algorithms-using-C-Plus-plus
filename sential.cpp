#include <iostream>
using namespace std; 

int main()
{
    int age;
    int ageTotal =0;
    int numberOfPeople = 0;
    cout<< "ENter the age of the person or -1 to  calculate "<<endl;
    cin >> age;
    while(age!=-1){
        ageTotal = ageTotal + age;
        numberOfPeople++;

        cout<<"ENter the age of the  next person or -1 to  calculate "<<endl;
        cin>>age;
    }
    cout<<"the total people are: "<<numberOfPeople<<endl;
    cout<<"the average age of the person are "<<ageTotal/numberOfPeople<<endl;
    return 0;
}