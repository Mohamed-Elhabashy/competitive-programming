#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;


int main()
{
    int n=d(),m=d();
    int sz=min(n,m);
    printf("%d\n",sz+1);
    int j=0;
    for(int i=sz;i>=0;i--){
        printf("%d %d\n",i,j);j++;
    }
}
