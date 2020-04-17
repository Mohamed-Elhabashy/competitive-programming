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
vector<pair<string, string>>v;
int main()
{
    int n=d();
    for(int i=0; i<n; i++)
    {
        string name,s;
        cin>>name>>s;
        v.push_back(make_pair(name,s));
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="rat")
        {
            cout<<v[i].first<<endl;

        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="child" || v[i].second=="woman")
        {
            cout<<v[i].first<<endl;

        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="man")
        {
            cout<<v[i].first<<endl;

        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="captain")
        {
            cout<<v[i].first<<endl;

        }
    }
}
