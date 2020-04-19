#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
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
char arr[N][N];
int main(){
    int r,c;
    bool flag=false;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='S'){
                flag=true;
                break;
            }

        }
        if(flag==false){
            for(int j=0;j<c;j++){
                arr[i][j]='z';
            }
        }
        else
            flag=false;

    }
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(arr[j][i]=='S'){
                flag=true;
                break;
            }
        }
        if(flag==false){
            for(int j=0;j<r;j++){
                arr[j][i]='z';
            }
        }
        else
            flag=false;
    }
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='z')
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
