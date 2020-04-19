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
long long fact(long long n)
{
    if(n==1)
        return 1;
    return n * fact(n-1);
}

int main(){
    int n=d();


    int x=n%4;
    int y=(n+1)%4;
    int z=(n+2)%4;
    if(x==1)
    printf("0 A\n");
    else if(y==1){
    printf("1 A\n");
    }
    else if(z==1)
    printf("2 A\n");
    else if(x==3)
    printf("0 B\n");
    else if(y==3)
    printf("1 B\n");
    else if(z==3)
    printf("2 B\n");
    else if(x==2)
    printf("0 C\n");
    else if(y==2)
    printf("1 C\n");
    else if(z==2)
    printf("2 C\n");
    else if(x==0)
    printf("0 D\n");
    else if(y==0)
    printf("1 D\n");
    else if(z==0)
    printf("2 D\n");
}
