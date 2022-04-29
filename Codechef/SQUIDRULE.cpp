#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--)
	{
	    int size, minmoney = 100001;
	    cin>>size;
	    int arr[size], sum=0;
	    for(int i=0; i<size; i++)
	    {
	        cin>> arr[i];
	        if(arr[i]<minmoney)
	        {
	            minmoney= arr[i];
	        }
	        sum +=arr[i];
	    }
	    
	    cout<< sum- minmoney<<endl;
	}
	return 0;
}
