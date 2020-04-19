#include<bits/stdc++.h>
using namespace std;
char s[201];
int main(){

    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i+=2;
        }
        else{
        printf("%c",s[i]);
        if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B')
        printf(" ");
        }
        
}
printf("\n");
}
