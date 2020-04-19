#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d()
{
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(pair<int,int>s,pair<int,int>f)
{
    if(f.first>s.first)
        return true;
    else if(f.first==f.second && f.second<s.second)
        return true;
    else
        return false;
}
int cm[N];
char arr[N];
int main()
{
    scanf("%s",arr);

    int n=strlen(arr);
    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
            cm[i]=cm[i-1]+1;
        else
            cm[i]=cm[i-1];
    }
    
    int t=d();

    while(t--)
    {
        int l=d(),r=d();
        l--,r--;
        printf("%d\n",cm[r]-cm[l]);

    }

    return 0;
}
