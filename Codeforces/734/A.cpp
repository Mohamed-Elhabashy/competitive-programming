#include<bits/stdc++.h>
using namespace std;
const int n =1e6;
char s[n];
int main(){
 int n;
 scanf("%d",&n);
 scanf("%s",s);
 int cnt_a=0,cnt_d=0;
 for(int i=0;i<n;i++){
 if(s[i]=='A')
 cnt_a++;
 else
 cnt_d++;

 }
 if(cnt_a>cnt_d)
 printf("Anton\n");
 else if(cnt_a<cnt_d)
 printf("Danik\n");
 else
 printf("Friendship\n");


}


