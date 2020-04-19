#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e5+200,OO=1e15;
int q,x;
int pos,l,r;
char c;
char arr[N];
set<int>s[27];
bool isfind(int i,int l,int r)
{
    if(s[i].lower_bound(l)==s[i].end())return 0;
    int ans=*s[i].lower_bound(l);
    if(ans>=l && ans<=r)return 1;
    return 0;
}
int main()
{

    scanf("%s",arr);
    int n=strlen(arr);
    scanf("%d",&q);
    for(int i=0; i<n; i++)
    {
        s[arr[i]-'a'].insert(i);
    }
    while(q--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d %c",&pos,&c);
            pos--;

            s[arr[pos]-'a'].erase(pos);
            s[c-'a'].insert(pos);
            arr[pos]=c;
        }
        else
        {
            scanf("%d %d",&l,&r);
            l--;
            r--;
            int ans=0;
            for(int i=0; i<26; i++)
            {
                ans+=isfind(i,l,r);
            }
            cout<<ans<<endl;
        }
    }
}
