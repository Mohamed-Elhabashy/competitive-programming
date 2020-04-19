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
char arr[N];
int main(){
    int n=d();
    scanf("%s",arr);
    int ans=0;
    for(int i=0;i<n;i+=2){
        if(arr[i]==arr[i+1]){
            ans++;
            if(arr[i]=='a')arr[i+1]='b';
            else arr[i+1]='a';
        }
    }

    printf("%d\n%s\n",ans,arr);
}
