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
int cm[N];
int main()
{   scanf("%s",arr);

    int n=strlen(arr);
    int q=d();
    while(q--){
        int x=d();
        cm[min(x-1,n-x)]++;

    }

    for(int i=0;i<n/2;i++){
        if(i!=0)
        cm[i]+=cm[i-1];

        if(cm[i]%2==1){
            swap(arr[i],arr[n-i-1]);

        }
    }
    printf("%s\n",arr);
    return 0;
}
