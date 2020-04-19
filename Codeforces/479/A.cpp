#include<bits/stdc++.h>
using namespace std;


int main(){
    int a , b, c,max;
    scanf("%d %d %d",&a,&b,&c);
    max=a+b*c;
    if(a*(b+c)>max)
    max=a*(b+c);
    if(a*b*c>max)
    max=a*b*c;
    if((a+b)*c>max)
    max=(a+b)*c;
    if(a+b+c>max)
    max=a+b+c;
    printf("%d\n",max);
    return 0;
}

