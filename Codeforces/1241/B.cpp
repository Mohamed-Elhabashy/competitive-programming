#include <bits/stdc++.h>
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
const long long N = 1e3,OO=0x3f3f3f3f;
pair<int,int>p[27];
char arr[N],arr1[N];
int main()
{
    int t=d();
    while(t--){
        for(int i=0;i<27;i++)
        p[i].first=p[i].second=0;
        scanf("%s %s",arr,arr1);
        int n1=strlen(arr);
        int n2=strlen(arr1);
        for(int i=0;i<n1;i++)
            p[arr[i]-'a'].first++;

        for(int i=0;i<n2;i++)
            p[arr1[i]-'a'].second++;
        bool f=0;
        for(int i=0;i<26;i++){
            if(p[i].first>0){
                if(p[i].second>0)
                    f=1;
            }

            if(p[i].second>0){
                if(p[i].first>0)
                    f=1;
            }
        }
        if(f==0)
        puts("NO");
        else
        puts("YES");
    }
}
