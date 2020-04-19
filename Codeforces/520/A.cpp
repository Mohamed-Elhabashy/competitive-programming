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

int f[26];
int main()
{
    int n=d();
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f[i]==0){
            puts("NO");
            return 0;
        }

    }
    puts("YES");
}
