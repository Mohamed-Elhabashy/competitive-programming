#include<bits/stdc++.h>
using namespace std;
const int c=1e5+5;
char s[c];
int main(){
    scanf("%s",s);
    int n=strlen(s);
    int cntlo=0,cntup=0;
    for(int i=0;i<n;i++){
    if(s[i]>='a' && s[i]<='z')
    cntlo++;
    else
    cntup++;
    
        }
    if(cntlo>=cntup)
            for(int i=0;i<n;i++)
            printf("%c",tolower(s[i]));
    else
            for(int i=0;i<n;i++)
            printf("%c",toupper(s[i]));
            
    printf("\n");        
}
