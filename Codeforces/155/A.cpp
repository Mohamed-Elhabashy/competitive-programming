#include<iostream>
using namespace std;


int main(){
    int n,x,cnt=0,min=0,max=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(i==0){
            min=x;
            max=x;
        }
        else{
            if(x < min){
            min=x;
            cnt++;
            }

            if(x > max){
                max = x;
                cnt++;
                }
        }


    }

 cout<<cnt<<endl;


    return 0;
}
