#include <bits/stdc++.h>
using namespace std ;
#define SZ(v) (int)v.size()
#define pb push_back
typedef long long ll ;
int n , a , b , k;
const int M = 2e5 ;
int arr[M];
int ans ;
vector<int> vec ;
int main()
{
    scanf ("%d%d%d%d" , &n ,&a , &b ,&k);

    for (int i =0 ; i < n ;i++)
    {
        scanf ("%d" ,arr+i);
    }
    sort(arr,arr+n);
    for (int i =0 ; i < n ;i++)
    {
        if (arr[i] <= a)
        {
            ans++;
            continue ;
        }
        if (a + b >= arr[i])
        {
            arr[i]-=a;
            arr[i]=(arr[i]+a-1)/a;
            vec.pb(arr[i]);
        }else
        {
            arr[i]%=(a+b);
            if (arr[i] == 0 )
            {
                arr[i]+=b;
                arr[i]=(arr[i]+a-1)/a;
                vec.pb(arr[i]);
                continue ;
            }
            if (arr[i] <= a )
            {
                ans++;
                continue ;
            }
            arr[i]-=a;
            arr[i]=(arr[i]+a-1)/a;
            vec.pb(arr[i]);
        }
    }
    sort(vec.begin() , vec.end());
    for (int i =0 ;i < SZ(vec);i++)
    {
        if (vec[i] <= k)
        {
            k-=vec[i];
            ans++;
        }
    }
    printf ("%d\n" ,ans );
    return 0;
}
