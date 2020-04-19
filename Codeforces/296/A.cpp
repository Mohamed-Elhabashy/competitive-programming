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
int arr[200];
map<int,int>mp;
int main()
{
    int n=d();

    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
        mp[arr[i]]++;
    }
    for(auto m:mp){
        if(2*m.second-1>n){
        puts("NO");
        return 0;
        }
    }


    puts("YES");



}
