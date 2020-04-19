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
char arr1[1000];
char arr2[1000];
int main()
{
    scanf("%s",arr);
    scanf("%s",arr1);
    if(strcmp(arr1,arr)==0)
        printf("No such string\n");
    else
    {
        int i;
        int n=strlen(arr);
        for(i=n-1;i>=0;i--){
            if(arr1[i]>=arr[i] && arr[i]!='z'){
            arr2[i]=arr[i]+1;

            break;
            }
            else if(arr1[i]<arr[i])
            arr2[i]='a';
            else if(arr[i]=='z')
            arr2[i]='a';
            else
            arr2[i]=arr[i];
        }
        for(int j=i-1;j>=0;j--){
            arr2[j]=arr[j];
            }
    if(strcmp(arr2,arr1)!=0){
           printf("%s\n",arr2);
           return 0;
           }
    }
    printf("No such string\n");
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
