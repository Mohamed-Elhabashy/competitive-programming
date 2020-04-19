#include <bits/stdc++.h>
typedef long long ll ;
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SZ(a) (int)a.size()
using namespace std ;
vector<int> v[5001];
int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n;
        cin >> n ;
        for (int i =0 ; i <= n ;i++)
            v[i].clear();
        bool ok =0 ;
        for (int i =0 ; i < n ;i++)
        {
            int x ;
            cin >> x ;
            v[x].pb(i);
        }
        for (int i =1 ; i <= n ;i++)
        {
            if (SZ(v[i]) > 2 )
                ok =1 ;
            if (SZ(v[i]) < 2 )continue ;
            for (int j =1 ; j < SZ(v[i])  ; j++)
            {
                if ( v[i][j] - v[i][0] > 1  )
                {
                    ok = 1 ;
                    break ;
                }
            }
        }
        if (ok && n > 2 )
            cout <<"YES\n";
        else
            cout <<"NO\n";
    }
}
