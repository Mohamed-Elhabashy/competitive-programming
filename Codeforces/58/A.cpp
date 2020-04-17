#include<bits/stdc++.h>
using namespace std;

char s[101];
int main(){
    scanf("%s",s);
    int n=strlen(s);
    char x[]={'h','e','l','l','o'};
    int y=0;
    for(int i=0;i<n;i++){

          if(s[i]==x[y]){
          if(y==4){
          printf("YES\n");
          return 0;
          }
          y++;
          }

    }
    printf("NO\n");
}
