#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{

    unordered_map<int, int> hash_map;
    set<int> sets;

    for (auto i : arr)
    {
        hash_map[i]++;
    }

    for (auto i : hash_map)
    {
        cout << i.first << ".  " << i.second << endl;
    }

    for (auto x : hash_map)
    {
        if (sets.find(x.second) != sets.end())
            return false;
        sets.insert(x.second);
    }
    return true;
}

int main()
{
    /*
    vector<int> arr;
    cout << "Enter the size of the array:: " << endl;
    int size;
    cin >> size;

    while (size--)
    {
        cout << "Enter the array element :: " << endl;
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << endl;
    */
    int temp[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    int n = sizeof(temp) / sizeof(temp[0]);

    vector<int> arr(temp, temp + n);

    cout << "the Resulant result is ::" << endl;

    cout << uniqueOccurrences(arr) << endl;
    cout << endl;

    // cout << "the array element is ::" << endl;
    // cout << endl;

    // for (int x : arr)
    //     cout << x << " ";
}