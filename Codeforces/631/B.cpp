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
int op,t,ne,n,m,k;
int r[6000][2];
int c[6000][2];

int main()
{
    n=d(),m=d(),k=d();
    int i=1;
    while(k--){
        op=d(),t=d(),ne=d();
        t--;
        if(op==1){
            r[t][0]=ne;
            r[t][1]=i;
        }
        else {
            c[t][0]=ne;
            c[t][1]=i;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[j][1]>r[i][1])
            printf("%d ",c[j][0]);
            else
            printf("%d ",r[i][0]);
        }
        puts("");
    }
}