#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	   // bool flag=true;
	   int count=1;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i+1==n)
	        break;
	        if(a[i]>a[i+1])
	        {
	            //flag=false;
	            count=0;
	            break;
	        }
	        
	    }
	    if(count==1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
