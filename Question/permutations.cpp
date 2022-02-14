#include<bits/stdc++.h>
using namespace std; 

void perm(char s[] ,int l= 0 , int h=0){
    int i;

    if(l == h)
        cout<<s<< " ";
    else{
        for ( i = l; i<=h; i++)
        {
            swap(s[l] , s[i] );
            perm(s,l+1,h);
            swap(s[l] ,s[i]);
        }
        
    }    

}

int main()
{
    char s[] = "dhshfjsdhfkjsdfksdjfhksj";
    perm(s,0,4);
    return 0;
}