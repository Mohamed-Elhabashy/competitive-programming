#include<bits/stdc++.h>
using namespace std;
int ans;
int sz;
int main(){
    int n,b,d;
    scanf("%d %d %d",&n,&b,&d);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x>b)continue;
        if(x+sz>d){
            ans++;
            sz=0;
        }
        else
            sz+=x;
    }
    printf("%d\n",ans);
}
