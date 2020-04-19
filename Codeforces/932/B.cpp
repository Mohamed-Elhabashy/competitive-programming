#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e6+2,OO=0x3f3f3f3f;
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
int arr[N],n;
int LIS(int i,int prv){
    if(i==n) return 0;
    int choice1=LIS(i+1,prv);
    int choice2=0;
    if(arr[i]>=arr[prv])
        choice2=1+LIS(i+1,i);

    return max(choice1,choice2);
}
vector<int>adj[11];
int main(){
    for(int i=1;i<=N;i++){
        string s=to_string(i);
        int sum=i;

        while(true){
            if(s.size()==1)
            break;

            sum=1;
            for(int j=0;j<s.length();j++){
                if(s[j]!='0')
                    sum*=(int)(s[j]-'0');
            }
            s=to_string(sum);
        }
        adj[sum].push_back(i);

    }
    int q=d();
    while(q--){
        int l=d(),r=d(),k=d();
        int ans=upper_bound(adj[k].begin(),adj[k].end(),r)-lower_bound(adj[k].begin(),adj[k].end(),l);
        cout<<ans<<endl;
    }
}
