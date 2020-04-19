#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
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
bool cmp(pair<int, int> s, pair<int, int> f)
{
    if (f.first > s.first)
        return true;
    else if (f.first == f.second && f.second < s.second)
        return true;
    else
        return false;
}
long long fact(long long n){
    if(n==1)
        return 1;
    return n * fact(n-1);
}

int cnt(long long n){
   int c=0;
    while(true){
        if(n==0)
        break;
        else{
        n/=10;
        c++;}
    }

    return c;

}
int n,a[N],b[N],k;

bool isok(int nn){
    int temp=k;
    for(int i=0;i<n;i++){
        if( (a[i]*nn) > b[i]){
            if((a[i]*nn)-b[i] <=temp)
            temp-=(a[i]*nn) - b[i];
            else
            return 0;
        }
    }
    return 1;
}

int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    for(int i=0;i<n;i++) scanf("%d",b+i);

    for(int i=0;i<3000;i++){
        if(!isok(i)){
        printf("%d\n",i-1);
        return 0;
        }
    }
}
