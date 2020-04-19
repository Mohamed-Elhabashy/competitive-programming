#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m,cnt=0;
   scanf("%d %d",&n,&m);
   for(int a=0;a<=1000;a++){
        for(int b=0;b<=1000;b++){
            if((a*a)+b==n){
              if((b*b)+a==m)
              cnt++;

            }



        }


   }
cout<<cnt<<"\n";
}
