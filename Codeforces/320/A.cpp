#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
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
int main()
{
    string s;
    cin>>s;
    if(s[0]!='1'){
        puts("NO");
        return 0;
    }
    for(int i=1;i<s.length();i++){
        if(s[i]=='1')continue;
        if(s[i]=='4' && s[i-1]=='1')continue;
        if(s[i]=='4' && s[i-1]=='4' && s[i-2]=='1')continue;
        else
        {
            puts("NO");
        return 0;
        }

    }
    puts("YES");
}
