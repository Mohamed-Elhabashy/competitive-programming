#include<bits/stdc++.h>
using namespace std;
char arr1[100];
char arr2[100];
int main(){
    scanf("%s",arr1);
    scanf("%s",arr2);
    int n1=strlen(arr1);
    int n2=strlen(arr2);
    int pos=0;
    for(int i=0;i<n2;i++){
        if(arr1[pos]==arr2[i])pos++;
    }
    printf("%d\n",pos+1);
}
