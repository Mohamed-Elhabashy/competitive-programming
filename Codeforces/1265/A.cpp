#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 1e5+20,OO=0x3f3f3f3f,mod=1e9+7;
char s[N];

int main()
{
    int t=d();
    while(t--)
    {
        scanf("%s",s);
        int n=strlen(s);
        bool f=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1] && s[i]!='?'){
                f=1;
                break;
            }
        }
        if(f){
            puts("-1");
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if('a'!=s[i-1] && 'a'!=s[i+1])s[i]='a';
                else if('b'!=s[i-1] && 'b'!=s[i+1])s[i]='b';
                else if('c'!=s[i-1] && 'c'!=s[i+1])s[i]='c';
            }
        }
        printf("%s\n",s);
    }
}
