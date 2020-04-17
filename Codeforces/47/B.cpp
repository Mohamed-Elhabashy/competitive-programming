#include<bits/stdc++.h>
using namespace std;
char s[4];
int x[3];
int main () {

    for(int i=0;i<3;i++){
        scanf("%s",s);
        if(s[1]=='>')
            ++x[s[0]-'A'];
        else
            ++x[s[2]-'A'];

    }
    if(x[0]==x[1]){
        printf("Impossible\n");
        return 0;
     }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(x[j]==i)
                printf("%c",'A'+j);
        }
     }
     printf("\n");
     return 0;
}
