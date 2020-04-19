#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
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
int arr[N];
map<int,int>mp;
map<int,int>mp1;
 
int  mn=INT_MAX;
int cnt=0;
int main()
{
    int n=d();
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
        mp[arr[i]]++;
        if(mp[arr[i]]==2) cnt++;
    }
    if(cnt==0){
    cout<<0<<endl;
    return 0;
    }
    for(int i=0; i<n; i++)
    {
        auto m=mp;
        int temp=0;
        for(int j=i; j<n; j++)
        {
            m[arr[j]]--;
            if(m[arr[j]]==1)
            {
                temp++;
            }
            if(temp==cnt)
            {
                mn=min(mn,j+1-i);;
                break;
            }
 
        }
 
    }
 
if(mn==INT_MAX)
    printf("0\n");
else
    printf("%d\n",mn);
}