#include<bits/stdc++.h>
using namespace std;

int a,ta,b,tb,h,m;
int main()
{

    scanf("%d %d",&a,&ta);
    scanf("%d %d",&b,&tb);
    scanf("%d:%d",&h,&m);
    int st=(h*60)+m;
    int en=st+ta;

    int f=5*60;
    int ans=0;
    while(true){
        if(f> (23*60)+59)break;
        int e=f+tb;
        if(e>st && f<en)ans++;
        f+=b;
    }

    cout<<ans<<endl;
}
