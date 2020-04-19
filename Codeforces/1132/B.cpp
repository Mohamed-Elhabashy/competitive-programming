#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int arr[N];
int arr1[N];

int main(){
  int n,w;
  long long sum=0,s;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",arr+i);
    sum+=arr[i];
  }
  sort(arr,arr+n);
  
  scanf("%d",&w);
    s=sum;
  for(int i=0;i<w;i++){
        scanf("%d",arr1+i);

  }
  for(int i=0;i<w;i++){
    sum-=arr[n-arr1[i]];
    printf("%lld\n",sum);
    sum=s;

  }


}
