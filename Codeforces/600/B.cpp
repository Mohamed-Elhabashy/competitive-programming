#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int a,b,x;
vector<int>v;
int main()
{
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<b;i++){
        cin>>x;
        int idx=upper_bound(v.begin(),v.end(),x)-v.begin();

        cout<<idx<<" ";
    }
}