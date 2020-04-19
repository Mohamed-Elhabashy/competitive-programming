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
char arr[N],arr1[N];
int main()
{
    map<string,int>mp;
    mp["polycarp"]=1;
    int m=d();
    for(int i=0;i<m;i++){
        scanf("%s reposted %s",arr,arr1);
        int n1=strlen(arr);
        int n2=strlen(arr1);
        for(int i=0;i<n1;i++)
        arr[i]=tolower(arr[i]);
        for(int i=0;i<n2;i++)
        arr1[i]=tolower(arr1[i]);

        mp[arr]=mp[arr1]+1;

    }
    int mx=-1;
    for(auto m:mp)
    mx=max(m.second,mx);
    printf("%d\n",mx);
}
