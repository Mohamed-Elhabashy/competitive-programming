#include<bits/stdc++.h>
using namespace std;

long long arr[2000];
int idx;
int main()
{
    int n;
    scanf("%d",&n);
    int p=0;
    int ans=0;
    while(n--){
        int x;
        scanf("%d",&x);
        if(x==-1){
            if(p>0)p--;
            else ans++;
        }
        else
            p+=x;
    }
    printf("%d\n",ans);
    
}