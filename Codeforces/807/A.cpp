#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;
vector<pair<int,int>>v;
int main()
{
    int n=d();
    for(int i=0;i<n;i++){
        int x=d(),y=d();
        v.push_back({x,y});
    }
    for(int i=0;i<n;i++){
        if(v[i].first!=v[i].second){
            puts("rated");
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].first <v[j].first){
                puts("unrated");
                return 0;
            }
        }
    }
    puts("maybe");
}
