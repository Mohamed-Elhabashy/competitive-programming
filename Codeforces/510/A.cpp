#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}
int arr[N];
int main(){
    char ce;
    bool flag=true;
    int c=d(),r=d();
    for(int i=1;i<=c;i++){
        if(i%2==0){

        }
        for(int j=1;j<=r;j++){
            if(i%2==1){
                printf("#");
                if(flag==true)
                ce='.';
                else
                    ce='#';

            }
            else{
                if(ce=='.' && j==r && flag ==true){
                printf("#");
                flag=false;
                }
                else if(flag==false &&j==1){
                    printf("#");
                    flag=true;
                }

                else{
                    printf(".");

                }

            }

        }
         printf("\n");
    }
}
