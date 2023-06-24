#include <iostream>

using namespace std;

int main() {
   int n, d, sum;
   
   cout << "Enter the number of terms: ";
   cin >> n;
   
   cout << "Enter the common difference: ";
   cin >> d;
   
   sum = (n * (2 * 1 + (n - 1) * d)) / 2;
   
   cout << "The sum of the first " << n << " terms in the arithmetic progression is " << sum << endl;
   
   return 0;
}
