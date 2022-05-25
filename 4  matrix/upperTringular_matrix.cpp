#include <bits/stdc++.h>
using namespace std;

class UpperTri
{
private:
    int n;
    int *A;

public:
    UpperTri()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    UpperTri(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getDimension() { return n; }
    ~UpperTri()
    {
        delete[] A;
    }
};

void UpperTri::set(int i, int j, int x)
{
    if (i <= j)
        // A[i*(i-1)/2+j-1] = x; // Row major formula
        A[j * (j - 1) / 2 + i - 1] = x; // colum major formula
}

int UpperTri::get(int i, int j)
{
    if (i <= j)
        // return A[i*(i-1)/2+j-1]; // row major formula
        return A[j * (j - 1) / 2 + i - 1]; // column major formula
}

void UpperTri::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
                cout << A[j * (j - 1) / 2 + i - 1] <<" "; // colum major
            else 
                cout<< "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter dimension" << endl;
    cin >> d;

    UpperTri um(d);

    int x;
    cout << "Enter all elements: " << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin>>x;
            um.set(i,j,x);
        }
    }
    cout << endl;
    um.display();

    return 0;
}