#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i,t,x=-1e9;
    scanf("%d %d",&n,&k);
    while(n--){

        scanf("%d %d",&i,&t);
        if(t>k)
        x=max(x,i-(t-k));
        else
        x=max(i,x);



    }
printf("%d\n",x);
}

