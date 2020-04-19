#include<bits/stdc++.h>
using namespace std;

int main(){
   int a[4],cnt=0;
   cin>>a[0]>>a[1]>>a[2]>>a[3];
   for(int i=0;i<4;i++){
    if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3]){
    break;
    }

    for(int y=i+1;y<4;y++){
      if(a[i]==a[y]){
      cnt++;
      }
    }

   }
   if(cnt==1)
   cout<<1<<endl;
   else if(cnt ==3 ||cnt==2)
    cout<<2<<endl;
   else if(cnt ==0)
    if(a[0]==a[1])
    cout<<3<<endl;
    else
    cout<<0<<endl;
}
