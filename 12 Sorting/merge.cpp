#include<bits/stdc++.h>
using namespace std; 

// merge the two sorted array with no extra space

void merge(long long a1[], long long a2[], int n, int m) 
        { 
            long long  j =0;
            long long   i =n-1;
               while(i>=0 && j<m){
                 if(a1[i]>=a2[j])   
                 {
                    swap(a1[i],a2[j]);
                    i--;
                    j++;
                 }
                 else{
                     break;
                 }
                 
               }
               sort(a1,a1+n);
               sort(a2,a2+m);
        } 

int main()
{   
    // cout << "Enter The number of  test case :" <<endl; 
    int T;
	cin >> T;
	
	while(T--){
	    int n, m;
        // cout << "Enter size of the array 1 and array 2:" <<endl; 
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
            // cout << "Enter element for array 1:"<< endl;
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
            // cout << "Enter element for array 2:"<< endl;
	        cin >> arr2[i];
	    }
	    merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}
    
    return 0;
}