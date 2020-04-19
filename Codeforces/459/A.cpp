#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}
int arr[N];
int main(){
   int x1=d(),y1=d(),x2=d(),y2=d();
   if(y1==y2){
    printf("%d %d %d %d\n",x1,y1-abs(x2-x1),x2,y2-abs(x2-x1));
   }
   else if (x1==x2){
    int mn=min(x1,x2);
    printf("%d %d %d %d\n",mn+abs(y2-y1),y1,mn+abs(y2-y1),y2);
   }
   else{
   if(abs(x2-x1) != abs(y2-y1))
        printf("-1\n");
   else{
        printf("%d %d %d %d\n",x2,y1,x1,y2);
   }
   }
}
