#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
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
int mn[300],mx[300];
int main()
{
    int n=d(),s=d();
    int sum_mn=0;
    int sum_mx=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&mn[i],&mx[i]);
        sum_mx+=mx[i];
        sum_mn+=mn[i];
    }
    if(!(s<=sum_mx && s>=sum_mn)){
        puts("NO");
    }
    else{
        puts("YES");
        for(int i=0;i<n;i++){
            printf("%d ",min(mx[i],s-sum_mn+mn[i]));
            s-=min(mx[i],s-sum_mn+mn[i]);
            sum_mn-=mn[i];
        }

    }
}
