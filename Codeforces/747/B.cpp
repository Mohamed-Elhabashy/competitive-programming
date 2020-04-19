#include<bits/stdc++.h>
using namespace std;

const long long N=1e6;
int d()
{
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(pair<int,int>s,pair<int,int>f)
{
    if(f.first>s.first)
        return true;
    else if(f.first==f.second && f.second<s.second)
        return true;
    else
        return false;
}
char arr[1000];
int main()
{
    int n=d();
    scanf("%s",arr);
    int c=0,g=0,t=0,a=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='A')
            a++;
        else if(arr[i]=='C')
            c++;
        else if(arr[i]=='G')
            g++;
        else if(arr[i]=='T')
            t++;
        else
            cnt++;

    }
    if((cnt==0 && (a==0 || t==0 || c==0 ||g==0 )) || n%4!=0){
        printf("===\n");
        return 0;
    }
    if(cnt==0){
        printf("%s",arr);
        return 0;
    }
    int mx=max(max(c,t),max(g,a));

    if(cnt>0){

    cnt-=(mx-a);
    cnt-=(mx-c);
    cnt-=(mx-g);
    cnt-=(mx-t);
    }
    else{
        printf("%s",arr);
        return 0;
    }

    if(cnt>=0 && cnt%4==0){
        int r=(mx-a)+(cnt/4);
        for(int i=0;i<n && r>0;i++){
            if(arr[i]=='?'){
            arr[i]='A';
            r--;
            }

        }
        r=(mx-g)+(cnt/4);
        for(int i=0;i<n && r>0;i++){
            if(arr[i]=='?'){
            arr[i]='G';
            r--;
            }

        }
        r=(mx-c)+(cnt/4);
        for(int i=0;i<n && r>0;i++){
            if(arr[i]=='?'){
            arr[i]='C';
            r--;
            }

        }
        r=(mx-t)+(cnt/4);
        for(int i=0;i<n && r>0;i++){
            if(arr[i]=='?'){
            arr[i]='T';
            r--;
            }

        }
        printf("%s\n",arr);
        return 0;
    }
 printf("===\n");
}



/*
                                       ███████████████████████████
                                       ███████▀▀▀░░░░░░░▀▀▀███████
                                       ████▀░░░░░░░░░░░░░░░░░▀████
                                       ███│░░░░░░░░░░░░░░░░░░░│███
                                       ██▌│░░░░░░░░░░░░░░░░░░░│▐██
                                       ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
                                       ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
                                       ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
                                       ██▌░│██████▌░░░▐██████│░▐██
                                       ███░│▐███▀▀░░▄░░▀▀███▌│░███
                                       ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
                                       ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
                                       ████▄─┘██▌░░░░░░░▐██└─▄████
                                       █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
                                       ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
                                       █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
                                       ███████▄░░░░░░░░░░░▄███████
                                       ██████████▄▄▄▄▄▄▄██████████
                                       ███████████████████████████
                                      ▂▃▄▅▆▇█▓▒░(Elhabashy)░▒▓█▇▆▅▄▃    */
