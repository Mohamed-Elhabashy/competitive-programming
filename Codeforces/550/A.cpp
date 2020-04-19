#include<bits/stdc++.h>
using namespace std;
const int c=1e5+5;
char s[c];
int main(){
    bool flag = false;
    bool flag2=false;
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]=='A' && s[i+1]=='B'){
                for(int y=i+2;y<n;y++){
                    if(s[y]=='B' && s[y+1]=='A')
                    {
                    printf("YES\n");
                    return 0;
                    }

                }

        }
       else if(s[i]=='B' && s[i+1]=='A'){
                for(int y=i+2;y<n;y++){
                    if(s[y]=='A' && s[y+1]=='B')
                    {
                    printf("YES\n");
                    return 0;
                    }

                }

       }

}
printf("NO\n");
}
