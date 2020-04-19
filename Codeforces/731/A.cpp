#include<bits/stdc++.h>
using namespace std;
char a[105];
int main(){
    scanf("%s",a);
    int n =strlen(a);
    int sum=0;
    if(a[0]-'a'>13){
    int z=('a'-a[0])+26;
    sum+=z;
    }
    else{
    int z=a[0]-'a';
    sum+=z;
    }
    for(int i=0;i<n-1;i++){
        int z= a[i+1]-a[i];
        if(abs(z)>13){
        sum+=26-abs(z);
        }
        else{
        sum+=abs(z);
        }

    }
    printf("%d\n",sum);
}


