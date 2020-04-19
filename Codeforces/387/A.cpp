#include<bits/stdc++.h>
using namespace std;


int main()
{
    int sh,sm,th,tm;
    scanf("%d:%d",&sh,&sm);
    scanf("%d:%d",&th,&tm);
    sh=sh*60+sm;
    th=th*60+tm;
    sh=sh-th;


     if(sh<0){
        sh=(24*60)+sh;
        int x=sh/60;
        sh-=(x*60);
        printf("%02d:%02d",x,sh);
    }
    else{
        int x=sh/60;
        sh-=(x*60);
        printf("%02d:%02d",x,sh);

    }
    return 0;
}

