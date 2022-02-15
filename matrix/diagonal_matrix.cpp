#include <bits/stdc++.h>
using namespace std;

class diagonal
{
private:
    int n;
    int *A;

public:
    diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~diagonal()
    {
        delete[] A;
    }
};

void diagonal::set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}

int diagonal::get(int i, int j)
{
    if (i == j)
        return A[i - 1];
}

void diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout <<" "<<A[i - 1];
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
}

int main()
{
    diagonal matrix(4);
    matrix.set(0, 0,3);
    matrix.set(1, 1,7);
    matrix.set(2, 2,4);
    matrix.set(3, 3,9);
    cout << matrix.get(0,0)<< endl;
    matrix.display();
    return 0;
}