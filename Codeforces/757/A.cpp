#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e7;

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
char arr[N];
map<char,int>valid;
map<char,int>mp;
int main()
{   string s="Bulbsar";
    for(int i=0;i<s.length();i++)
        valid[s[i]]=1;

    scanf("%s",arr);
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(valid[arr[i]]==1){
            mp[arr[i]]++;
        }
    }
    int mn=INT_MAX;
    mp['u']/=2;
    mp['a']/=2;
    for(int i=0;i<s.length();i++){
            mn=min(mn,mp[s[i]]);
    }
    cout<<mn<<endl;
}
