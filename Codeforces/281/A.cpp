#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
char s[N];
int main(){
    scanf("%s",s);
    int n =strlen(s);
    s[0]=toupper(s[0]);
    for(int i=0;i<n;i++){
        if(s[i]==' ')
        s[i+1]=toupper(s[i+1]);
    }
    printf("%s",s);

}
