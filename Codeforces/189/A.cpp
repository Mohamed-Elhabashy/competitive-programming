#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,ans=0;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(int x=0;x<=4000;x++){
            for(int y=0;y<=4000;y++){
                int z=(n-(x*a)-(y*b))/c;
                if(z<0)
                break;
                else{
                 if(n==(x*a)+(y*b)+(z*c))
                    ans=max(ans,x+y+z);
                }

    }
    }
    printf("%d\n",ans);
}
