#include<bits/stdc++.h>
using namespace std;
int a[101]={0};
int main(){

    int n,k;
    scanf("%d%d",&n,&k);
    int r=n;
    while(r--){
            int b;
            scanf("%d",&b);
            a[b-1]++;

    }
int max=0,cnt=0;
for(int i=0;i<100;i++){
if(a[i]>0){
    cnt++;
    if(a[i]>=max)
    max=a[i];
}}
for(int i=1;i<=100;i++){
if(i*k>=max){
printf("%d\n",(i*k*cnt)-n);
return 0;
}

}
    return 0;
}
