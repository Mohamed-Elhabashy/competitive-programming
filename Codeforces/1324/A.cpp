#include <bits/stdc++.h>
typedef long long ll ;
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SZ(a) (int)a.size()
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        bool o ,e ;
        o = e = 0 ;
        for (int i =0 ; i < n ;i++)
        {
            int x ;
            cin >> x ;
            if (x & 1 )o=1;
            else
                e = 1 ;
        }
        if (o == e )
            cout <<"NO\n";
        else
            cout <<"YES\n";
    }
}
