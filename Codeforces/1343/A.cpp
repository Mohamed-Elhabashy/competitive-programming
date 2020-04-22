#include <bits/stdc++.h>
using namespace std;
const int N = 500 + 7;
int t,n;
vector<long long>v;
void solve(){
    long long sum=3;
    v.push_back(sum);
    for(int i=2;i<=35;i++){
        sum+=(1LL<<i);
        v.push_back(sum);
    }
}
int main()
{
    solve();
    cin>>t;
    while(t--){
        cin>>n;
        for(auto vv:v){
            if(n%vv==0){
                cout<<n/vv<<endl;
                break;
            }
        }
    }
}
