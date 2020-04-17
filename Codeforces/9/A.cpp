#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int mx=max(a,b);
    int ans=0;
    while(mx<=6){
        ans++;
        mx++;
    }
    //if(ans==6){cout<<"1/1\n";return 0;
    int i=2;
    int ans1=6;
    while(i<7){
        if(ans%i==0 && ans1%i==0){
           ans/=i; ans1/=i;
           }
           i++;
    }cout<<ans<<"/"<<ans1<<endl;
}
