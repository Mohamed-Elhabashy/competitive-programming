#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=1e5,OO = 0x3f3f3f3f;


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
char arr[1000];
long long ans;
int main()
{
    scanf("%s",arr);
    int n=strlen(arr);
    bool flag=1;
    for(int i=1;i<n;i++) {
        if(!(arr[i]=='0')){
            flag=0;
        }
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            ans++;
        }

    }
    if(flag==1 && n%2!=0)
    printf("%lld\n",ans-1);
    else
    printf("%lld\n",ans);
}
