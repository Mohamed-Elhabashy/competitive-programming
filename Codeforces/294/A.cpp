#include<bits/stdc++.h>
using namespace std;
int arr[200];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",arr+i);
    int m;
    scanf("%d",&m);
    while(m--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==1){
            arr[2]+=arr[1]-y;
            arr[1]=0;
        }
        else if(x==n){
            arr[n-1]+=y-1;
            arr[n]=0;
        }
        else{
            arr[x+1]+=arr[x]-y;
            arr[x-1]+=y-1;
            arr[x]=0;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}
