#include<bits/stdc++.h>
using namespace std;
int arr[105];


int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int cnt=m;
    while(n--){
        int l,r;
        scanf("%d%d",&l,&r);
        if(l==1 && r==m){
            printf("0\n");
            return 0;
        }
        else
        for(int i=l;i<=r;i++){
            if(arr[i]!=1){
            arr[i]=1;
            cnt--;
            }


        }
    }
    printf("%d\n",cnt);
    for(int i=1;i<=m;i++)
        if(arr[i]==0)
        printf("%d ",i);
    printf("\n");

}
