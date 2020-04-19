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
//char arr[N];
int arr[N];
set<int>s;
int main(){
    int n=d();
    while(n--){
        int x=d();
        s.insert(x);
    }
    set <int> :: iterator itr;
    itr=s.begin();
    int x=*itr;



    itr++;
    int y=*itr;

    itr++;
    int z=*itr;


    if(s.size()>3)
        printf("-1\n");
    else if(s.size()==3){


        if(z-y==y-x)
            printf("%d\n",z-y);
        else
             printf("-1\n");

    }
    else if(s.size()==2){
        if((y-x)%2==0)
            printf("%d\n",(y-x)/2);
        else
                printf("%d\n",y-x);
    }
    else
        printf("0\n");

}
