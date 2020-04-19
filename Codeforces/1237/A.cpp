#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 13845+30,OO=0x3f3f3f3f;
int arr[N];
int arr1[N];
int main()
{
    int n=d();
    int sum=0;
    for(int i=0; i<n; i++)
    {

        scanf("%d",arr+i);
        arr1[i]=arr[i]/2;
        sum+=arr1[i];
    }

    if(sum>0)
    {
        for(int i=0; i<n; i++)
        {
            if(sum==0)
                break;
            if(arr[i]<0 && arr[i]&1)
            {
                arr1[i]-=1;
                sum--;
            }
        }

        for(int i=0; i<n; i++)
            cout<<arr1[i]<<endl;
    }
    else if(sum<0)
    {
        for(int i=0; i<n; i++)
        {
            if(sum==0)
                break;
            if(arr[i]>0 && arr[i]&1)
            {
                arr1[i]+=1;
                sum++;
            }
        }

        for(int i=0; i<n; i++)
            cout<<arr1[i]<<endl;
    }
    else{
        for(int i=0; i<n; i++)
            cout<<arr1[i]<<endl;
    }
}
