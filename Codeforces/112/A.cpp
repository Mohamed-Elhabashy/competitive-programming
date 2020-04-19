#include<bits/stdc++.h>
using namespace std;
char s1[105];
char s2[105];
int main(){
    scanf("%s",s1);
    scanf("%s",s2);
    int n =strlen(s1);
    for(int i=0;i<n;i++)
        s1[i]=tolower(s1[i]);
    for(int i=0;i<n;i++)
        s2[i]=tolower(s2[i]);
    if(strcmp(s1,s2)==0)
            printf("0\n");
    else if(strcmp(s1,s2)>0)
            printf("1\n");
    else
            printf("-1\n");
}
