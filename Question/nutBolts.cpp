// Hashmap based solution to solve
#include <bits/stdc++.h>
using namespace std;

// function to match nuts and bolts
void nutboltmatch(char nuts[], char bolts[], int n)
{
	unordered_map<char, int> hash;

	// creating a hashmap for nuts
	for (int i = 0; i < n; i++)
		hash[nuts[i]] = i;

	// searching for nuts for each bolt in hash map
	for (int i = 0; i < n; i++)
		if (hash.find(bolts[i]) != hash.end())
			nuts[i] = bolts[i];

	// print the result
	cout << "matched nuts and bolts are-" << endl;
	for (int i = 0; i < n; i++)
		cout << nuts[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << bolts[i] << " ";
}

// Driver code
int main()
{
	char nuts[] = {'@', '#', '$', '%', '^', '&'};
	char bolts[] = {'$', '%', '&', '^', '@', '#'};
	int n = sizeof(nuts) / sizeof(nuts[0]);
	nutboltmatch(nuts, bolts, n);
	return 0;
}
