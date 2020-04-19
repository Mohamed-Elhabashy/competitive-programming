#include<bits/stdc++.h>
using namespace std;
char s[105];
int main(){

scanf("%s",s);
int n=strlen(s);
int cnt_0=0,cnt_1=0;
for(int i=0;i<n;i++){
if(s[i]=='1'){
cnt_1++;
cnt_0=0;
}
else{
cnt_0++;
cnt_1=0;
}
if(cnt_0==7||cnt_1==7){
printf("YES\n");
return 0;
}
}
printf("NO\n");
return 0;

}
