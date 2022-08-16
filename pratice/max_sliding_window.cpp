#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void max_element(vector<int> arr, int k)
{
    // appproch 1 naive approch

    int n = arr.size();
    /*
    int j, maxi_element;
    for (int i = 0; i <= n - k; i++)
    {
        maxi_element = arr[i];
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > maxi_element)
                maxi_element = arr[i + j];
        }
        cout << maxi_element << " ";
    }
    // time complexity = 0^n2 , space = 0(1)


    //    Approch 2 using the priority queue


    // step 1  :- create a max heap  and add the k element from the array into the queue

    vector<int> res;
    priority_queue<int> q;
    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    // step 2  add the max element in the result array from the queue
    res.push_back(q.top());
    q.pop();

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        res.push_back(q.top());
        q.pop();
        // q.remove(arr[i-k+1])
    }
    */

    //    approch 3 using deque

    // create a deque and add the  only useful  k element
    deque<int> deq;
    int i;
    for (i = 0; i < k; i++)
    {
        while ((!deq.empty()) && arr[i] >= arr[deq.back()])
            deq.pop_back();
        deq.push_back(i);
    }

    for (; i < n; i++)
    {
        cout << arr[deq.front()] << " ";
        while ((!deq.empty()) && deq.front() <= i - k)
            deq.pop_front();

        while ((!deq.empty()) && arr[i] >= arr[deq.back()])
            deq.pop_back();

        deq.push_back(i);
    }
    cout << arr[deq.front()] << " ";
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    max_element(arr, 3);
    return 0;
}