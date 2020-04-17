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

int main()
{
    int n=d();
    for(int i=n;i>=1;i--)
        if(!(n%i)) printf("%d ",i),n=i;
}
