#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int t,x,n,m;
int main()
{
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        while(n--){
            int tmp=x/2;
        tmp+=10;if(tmp>x)break;
        x=tmp;
        }
        while(m--){
            x-=10;
        }
        if(x<=0)puts("YES");
        else puts("NO");
    }
}
