    #include<iostream>
    using namespace std;
    typedef long long int ll;

    void solvehojabsdk(int tt) 
    {
    ll n, m, l; cin >> n >> m >> l;

    ll rem = (l + n - 1);
    while(m >= l && rem >= l) {
    ll tmp = (m % rem);
    if(tmp == m && m >= l) {
    rem = m;
    m = tmp;
    continue;
    } else m = tmp;
    rem--;
    }

    cout << m << endl;
    }
    int main(){
        ll t;
        cin>>t;
        for(ll i=0;i<t;i++)
        {
            solvehojabsdk(i);
        }
    }