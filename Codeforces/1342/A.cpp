#include<bits/stdc++.h>
using namespace std;
const int N =2e5,OO=0x3f3f3f3f;
long long t,x,y,a,b;
int main()
{
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if(x==0 && y==0){
            puts("0");
            continue;
        }
        pair<int,int>p=minmax(x,y);
        int f=p.first;
        int s=p.second;
        long long t1=f*b + ((s-f)*a);
        long long t2=f*a + (s*a);
        cout<<min(t1,t2)<<endl;
    }
}
