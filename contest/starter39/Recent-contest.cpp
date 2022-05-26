#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,c1=0,c2=0;
	    cin>>x;
	    string s[x];
	    string h="START38";
	    for(int i=0;i<x;i++){
	        cin>>s[i];
	       if(s[i].compare(h)==0)
	        c1++;
	       else
	        c2++;
	        
	   }
	   std::cout << c1<<" "<<c2 << std::endl;
	}
	return 0;
}