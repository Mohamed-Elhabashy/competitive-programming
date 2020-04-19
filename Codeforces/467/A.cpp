#include<bits/stdc++.h>
using namespace std;

int main (){
   //freopen("groups.in","r",stdin);
    int t,cnt=0;
    scanf("%d",&t);
    while(t){
      int x,y;
      scanf("%d%d",&x,&y);
      (y-x)>=2 ? cnt++ : cnt;

      t--;
      }
      printf("%d\n",cnt);

    return 0;
}
