#include<iostream>
using namespace std;


int main(){
    int n,d,jokes=0,x=0,song;
    scanf("%d %d",&n,&d);
    for(int i =0;i<n;i++){
        cin>>song;
        x+=song;
        if(i<n-1){
        jokes+=2;
        x+=10;
        }
        else
        jokes+=(d-x)/5;
    }
    if(x>d)
    cout<<-1<<endl;
    else
    cout<<jokes<<endl;

    return 0;
}
