#include <bits/stdc++.h>
using namespace std;

class LowerTri
{
private:
    int n;
    int *A;

public:
    LowerTri()
    {
        n = 2;
        A = new int[2* (2+1)/2];
    }
    LowerTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getDimension(){ return n;}
    ~LowerTri()
    {
        delete[] A;
    }
};

void LowerTri::set(int i, int j, int x)
{
    if (i >= j)
        // A[i*(i-1)/2+j-1] = x; // Row major formula
        A[n*(j-1)-(j-2) *(j-1)/2+i-j] = x; // colum major formula
}

int LowerTri::get(int i, int j)
{
    if (i >= j)
        // return A[i*(i-1)/2+j-1]; // row major formula
        return A[n*(j-1)-(j-2) *(j-1)/2+i-j]; // column major formula
}

void LowerTri::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                // cout <<" "<<A[i*(i-1)/2+j-1]; // row major
                cout<<A[n*(j-1)-(j-2) *(j-1)/2+i-j]<<" "; // colom major
            else 
                cout<< "0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter dimension"<<endl;
    cin>>d;

    LowerTri lm(d);

    int x;
    cout<<"Enter all elements: " <<endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin>>x;
            lm.set(i,j,x);
        }
        

    }
    cout<<endl;
    lm.display(); 

    return 0;
}