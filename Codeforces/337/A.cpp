#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int arr[N];
int main(){
   int n,m;
   scanf("%d%d",&n,&m);

   for(int i=0;i<m;i++)
    scanf("%d",arr+i);

   sort(arr,arr+m);
   int min=arr[n-1]-arr[0];
   for(int i=1;i<m;i++){
    if(i+n-1<m){
        if(arr[i+n-1]-arr[i]<min)
            min=arr[i+n-1]-arr[i];
    }
   }
   printf("%d\n",min);
}
