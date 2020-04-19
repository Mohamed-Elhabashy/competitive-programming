#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e7;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll>v;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            v.push_back(n/i);


        }
    }
    if(i == n/i && n%i==0)
    {
        v.push_back(n/i);

    }
    return v;
}
int arr[500];
int main()
{
    int t=d();
    while(t--)
    {
        int n=d();
        n*=4;
        for(int i=0; i<n; i++)
        {
            scanf("%d",arr+i);
        }
        bool flag=0;
        sort(arr,arr+n);
        for(int i=0; i<n; i+=2)
        {
            if(arr[i]!=arr[i+1])
            {
                printf("NO\n");
                flag=1;
                break;
            }

        }
        if(flag==0)
        {

            int area=arr[n-1]*arr[0];
            for(int i=0; i<n; i+=2)
            {
                if(!(arr[i]*arr[n-1-i]==area))
                {
                    printf("NO\n");
                    flag=1;
                    break;

                }

            }
            if(flag==0)
                printf("YES\n");
        }

    }
}
