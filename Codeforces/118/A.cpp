#include<bits/stdc++.h>
using namespace std;
char s[105];
int main(){

scanf("%s",s);
int n=strlen(s);
for(int i=0;i<n;i++){
s[i]=tolower(s[i]);
if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u'  || s[i]=='i')
continue;
else
printf(".%c",s[i]);

}
printf("\n");


}
