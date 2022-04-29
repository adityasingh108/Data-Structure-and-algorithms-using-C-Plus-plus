#include <iostream>
using namespace std;

int helper(int arr[], int k){
	if(k == 0 || k== 0)
		return 0;
	return  helper(arr, k-1 );	
}

int numberofways(int arr[] , int n, int k){

	int ans = 0;
	ans = helper(arr, k);

	if(ans % 2 == 0){
		return helper(arr, k);

	}
	return ans;

}

int main() {
	int n, k;
	cin>>n,k;
	int arr[n];
	while(n--){
		arr[n] = n; 
	}
	cout<<numberofways(arr, n,  k);

	return 0;
} 