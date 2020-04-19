#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;

int main(){
    int n,cnt_1=0,cnt_2=0,cnt_3=0,cnt_4=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==1)
            cnt_1++;
        else if(x==2)
            cnt_2++;
        else if(x==3)
            cnt_3++;
        else
            cnt_4++;
    }
    int ans;

    if(cnt_3>=cnt_1){
          if(cnt_2*2 %4==0)
           ans=cnt_4+(cnt_2*2 / 4)+cnt_3;
        else
            ans=cnt_4+(cnt_2*2 / 4)+cnt_3+1;
    }
    else{
        cnt_1-=cnt_3;    
        if((cnt_1+(cnt_2*2)) %4==0)
           ans=cnt_4+(((cnt_2*2) + cnt_1) / 4)+cnt_3;
        else
            ans=cnt_4+( ((cnt_2*2) + cnt_1)/ 4)+ cnt_3 + 1;
    }
    printf("%d\n",ans);
}



