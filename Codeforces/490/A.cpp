#include<bits/stdc++.h>
using namespace std;
int arr1[6000];
int arr2[6000];
int arr3[6000];
int main(){
    int n,cnt_1=0,cnt_2=0,cnt_3=0,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);

        if(x==1){
            cnt_1++;
            arr1[a]=i;
            a++;
        }
        else if(x==2){
            cnt_2++;
            arr2[b]=i;
            b++;
        }
        else{
            cnt_3++;
            arr3[c]=i;
            c++;
        }

    }
    int r=min(cnt_1,min(cnt_2,cnt_3));
    if(r!=0){
    printf("%d\n",r);
    for(int i=0;i<r;i++){
        printf("%d %d %d\n",arr1[i],arr2[i],arr3[i]);
    }
    }
    else
        printf("0\n");
}
