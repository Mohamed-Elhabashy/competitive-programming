#include<bits/stdc++.h>
using namespace std;

int arr[105];
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={4,7,44,47,77,74,444,447,474,477,774,777,744,747};
    for(int i=0;i<14;i++){
        if(n%arr[i]==0){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
