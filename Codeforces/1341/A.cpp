#include <bits/stdc++.h>
using namespace std;
const int N =200,OO=0x3f3f3f3f;
int t,n,a,b,c,d;

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        int st=a-b;
        int en=a+b;
        int s1=c-d;
        int s2=c+d;
        if(n*st>s2){
            puts("NO");
            continue;
        }
        if(n*en<s1){
            puts("NO");
            continue;
        }
        puts("YES");

    }}
