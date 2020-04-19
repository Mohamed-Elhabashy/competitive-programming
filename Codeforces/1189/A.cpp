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
char arr[N];
vector<string>v;
int main()
{
    int n=d();
    scanf("%s",arr);
    int cnt_0=0,cnt_1=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='0')
        cnt_0++;
        else
        cnt_1++;
    }
    if(cnt_1!=cnt_0)
        printf("1\n%s\n",arr);
    else{
        printf("2\n");
        for(int i=0;i<n-1;i++)
        printf("%c",arr[i]);
        printf(" %c\n",arr[n-1]);
    }
    return 0;
}
