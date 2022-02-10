#include<bits/stdc++.h>
using namespace std; 

void upper(char a[]){
    
    int i = 0;
    for(i; a[i] != '\0'; i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i]+32;

    }
    cout << a<<endl;
}

void lower(char a[]){
    int i = 0;
    for(i; a[i] != '\0'; i++){
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i]-=32;

    }
    cout << a<<endl;
}


void toggle_word(char a[]){
    int i = 0;
    for ( i = 0; a[i] != '\0'; i++)         
    {   
        if(a[i] >= 'a' && a[i]<= 122)
            a[i] -= 32;
        else if(a[i] >=65 && a[i] <= 'Z')
                a[i] += 32;    
        
    }
    cout << a;
}

int number_of_words(string a){
    int word = 0;
    for(int i =0; a[i] != '\0'; i++){
        if(a[i] ==' ' && a[i-1] !=' ')
            word++;
    }
    return word;

} 

void reverse(char a[])
{
    int i , j;
    char t;

    for(j = 0; a[j] != '\0'; j++){}

    j = j-1;

    for ( i = 0; i < j; i++ ,j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;

    }
    cout<<a<<endl;
    

}

void compare(char a[] ,char b[])
{
    int i, j;
    for ( i = 0 ,j= 0; a[i] != '\0' && b[j]!= '\0'; i++,j++)
    {
        if(a[i] != b[j])
            break;
    }
    if(a[i] == b[j])
        cout<<"Equal"<<endl;
    else if(a[i] > a[j])
        cout<<"Smaller " <<endl;
    else{
        cout<<"GReater"<<endl;
    }       
    
}

string palindrome(char a[])
{
    int i , j;
    char t;

    for(j = 0; a[j] != '\0'; j++){}

    j = j-1;

    for ( i = 0; i < j; i++ ,j--)
    {
        if (a[i] != a[j])
            {return "not  Palindrome";}
       

    }
    return "this is palindrome";
}

int main()
{ 

    // uuper to lower
    char u[] = "5 ADiTYA";
    cout<<"UPPER to lower: "<<u<<endl;
    upper(u);


    //lower to uppper
    char l[] = " 6 adiTtYa";
    cout<<"lower to UPPER: "<<l<<endl;
    lower(l);

    // toggle upper to lower or lower to upper
    char toggle[] = "tOgGLe";
    cout<<"lower to UPPER  && upper to lower: "<<toggle<<endl;
    toggle_word(toggle);
    cout<<endl;

    // word count 
    string  word = "Aditya   Kumar Singh ";
    cout<<"number of words in : " << word <<endl;
    cout<< number_of_words(word) <<endl;

    // reversing element
    char a[]= "PYTHON";
    cout<<"the String is ::" <<a<<endl;
    cout<<"the String is ::";
    reverse(a);

    cout<<endl;

    // compare the element
     char s1[] = "ADITYA";
     char s2[] = "ADITYA";
     cout<<"The string is ::"<<endl;
     compare(s1, s2);
     cout<<endl;

    // check the element is palindrome or not

    char p[] = "ADAI";
    cout<<palindrome(p)<<endl;




    return 0;

}