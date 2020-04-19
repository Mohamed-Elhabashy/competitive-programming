#include<iostream>
#include<cmath>
using namespace std;

int a,b,cnt_a=0,cnt_b=0,cnt=0;
int main(){

    cin>>a>>b;
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i))
        cnt_a++;
        else if(abs(b-i)<abs(a-i))
        cnt_b++;
        else
        cnt++;
    }

cout<<cnt_a<<" "<<cnt<<" "<<cnt_b<<"\n";
    return 0;
}
