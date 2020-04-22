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
        n/=2;
        if(n&1){
            puts("NO");
            continue;
        }
        puts("YES");
        int cnt=2;
        long long sum=0;
        long long sum1=0;
        for(int i=1;i<=n;i++,cnt+=2){
            cout<<cnt<<" ";
            sum+=cnt;
        }
        cnt=1;
        for(int i=1;i<n;i++,cnt+=2){
            sum1+=cnt;
            cout<<cnt<<" ";

        }
        cout<<sum-sum1<<endl;


    }
}
