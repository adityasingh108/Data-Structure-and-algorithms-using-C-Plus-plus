#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x;
	    cin >> n>> x;
	    int size = n-1;
	    int arr[size];
	    int avg = 0;
	    for (int i=0;i<size;i++)
	    {
	        cin >> arr[i];
	        avg += arr [i];
	       
	    }
	    int ans = (n * x) - avg;
	    if(ans <= 0 )
	    {
	        cout << "0"<<endl;
	    }
	    else
	    {
	        cout<<ans <<endl;
	    }
	}
	return 0;
}
