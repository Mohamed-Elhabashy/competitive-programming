#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
    int n;
    scanf("%d",&n);
    int min=101,max=-1,a,b;
    for(int i=1;i<=n;i++){
        scanf("%d",arr+i);
        if(arr[i]>max){
            max=arr[i];
            a=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            b=i;
        }
    }

    if(a>b)
        printf("%d\n",(a-1)+(n-(b+1)));
    else
        printf("%d\n",(a-1)+(n-b));


}
