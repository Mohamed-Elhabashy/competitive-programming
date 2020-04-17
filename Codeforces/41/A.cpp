#include<bits/stdc++.h>
using namespace std;
char c[101];
char s[101];
int main(){
    scanf("%s",c);
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0,y=n-1;i<n;i++,y--){
            if(c[i]!=s[y]){
            printf("NO\n");
            return 0;
            }
    }
    printf("YES\n");
}
