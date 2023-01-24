#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10000;

bool isPrime[MAX_N + 1];           // Whether each number is prime
vector<int> primes;                // List of four-digit primes
unordered_map<int, int> distances; // Distance from Num1 to each node

// Check if a number is prime
bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    int i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

// Find the shortest path from Num1 to Num2
int ShortestPath(int Num1, int Num2)
{
    // Initialize the isPrime array and primes list
    for (int i = 0; i <= MAX_N; i++)
    {
        isPrime[i] = checkPrime(i);
        if (isPrime[i] && i >= 1000)
        {
            primes.push_back(i);
        }
    }

    // Initialize the distances map and queue
    distances[Num1] = 0;
    queue<int> q;
    q.push(Num1);

    // Perform BFS
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        // Check all possible one-digit alterations
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                // Skip leading zeros and the current digit
                if (i == 0 && j == 0)
                    continue;
                if (j == (curr / (int)pow(10, i)) % 10)
                    continue;

                // Alter the current digit and check if the resulting number is prime
                int altered = curr - (curr / (int)pow(10, i)) % 10 * (int)pow(10, i) + j * (int)pow(10, i);
                if (!isPrime[altered])
                    continue;

                // If the altered number has not been visited, add it to the queue and update the distances map
                if (distances.find(altered) == distances.end())
                {
                    distances[altered] = distances[curr] + 1;
                    q.push(altered);
                }
            }
        }
    }

    // Return the distance from Num1 to Num2, or -1 if Num2 was not reached
    if (distances.find(Num2) != distances.end())
    {
        return distances[Num2];
    }
    else
    {
        return -1;
    }
}

int main()
{
    // Test the findShortestPath function
    int Num1 = 1033;
    int Num2 = 8179;
    cout << ShortestPath(Num1, Num2) << endl; //
}