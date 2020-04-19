#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
char arr[N];
int main(){
    bool flag=false;
    scanf("%s",arr);
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='0'){
            arr[i]='a';
            flag =true;
            break;
        }
    }
    if(flag==true)
    for(int i=0;i<n;i++){
        if(arr[i]=='a')
            continue;
        printf("%c",arr[i]);
    }
    else
        for(int i=0;i<n-1;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
