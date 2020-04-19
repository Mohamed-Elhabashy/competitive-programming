#include<bits/stdc++.h>
using namespace std;
const int c=1e5+5;
char s[c];
char x[c];
char y[c];
int main(){
    scanf("%s",x);
    scanf("%s",y);
    scanf("%s",s);
    int n=strlen(s);
    int q=strlen(x);
    int p=strlen(y);
    int cnt_x=q,cnt_y=p,cnt_s=n;
   
    for(int i=0;i<q;i++){
       for(int w=0;w<n;w++){
        if(x[i]==s[w]){
        cnt_x--;
        cnt_s--;
        s[w]='0';
        break;
        }

       }
        }

       for(int i=0;i<p;i++){
           for(int w=0;w<n;w++){
            if(y[i]==s[w]){
            cnt_y--;
            cnt_s--;
            break;
            }

           }
        }
      if(cnt_s==0&&cnt_x==0&&cnt_y==0)
      printf("YES\n");
      else
      printf("NO\n");
}
