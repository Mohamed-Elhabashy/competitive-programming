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
int arr[N];
int main()
{
    long long h=lld(),l=lld();

    long long  z=(h*h) + (l*l);
    printf("%.13lf\n",((z/2.0 )/h)-h);
}
