#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=1e5,OO = 0x3f3f3f3f;


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
long long n,l,r;
int main()
{
    n=lld(),l=lld(),r=lld();
    long long sum_min=0,sum_max=1;
    sum_min=n-(l-1);
    for(int i=0; i<(l-1); i++)sum_min+=pow(2,i+1);
    cout<<sum_min<<" ";
    int i;
    n--;
    if(r==1)
    {
        sum_max+=n;
    }
    else
    {
        for(i=1; i<r-1; i++)
        {
            sum_max+=pow(2,i);
            n--;
        }
        sum_max+=pow(2,i)*n;
    }
    cout<<sum_max<<endl;


}
