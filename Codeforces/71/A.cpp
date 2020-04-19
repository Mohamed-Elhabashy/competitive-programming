#include<bits/stdc++.h>
using namespace std;
char s[105];
int main(){
int n;
scanf("%d",&n);
while(n--){
scanf("%s",s);
if(strlen(s)>10)
printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
else
printf("%s\n",s);

}

}
