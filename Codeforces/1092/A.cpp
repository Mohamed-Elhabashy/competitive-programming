#include<bits/stdc++.h>
using namespace std;
char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        if(n>k){
        if(n%k==0){
            int r=n/k;
            for(int i=0;i<r;i++)
               for(int j=0;j<k;j++)
                printf("%c",arr[j]);
        }
        else{
            int r=n/k;
            for(int i=0;i<r;i++)
               for(int j=0;j<k;j++)
                printf("%c",arr[j]);

            int q=n%k;
            for(int i=0;i<q;i++)
               printf("%c",arr[i]);
        }
        }
        else{
            for(int i=0;i<n;i++)
                printf("%c",arr[i]);
        }
        printf("\n");
    }
}
