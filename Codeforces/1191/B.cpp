#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
bool cmp(pair<int, int> s, pair<int, int> f)
{
    if (f.first > s.first)
        return true;
    else if (f.first == f.second && f.second < s.second)
        return true;
    else
        return false;
}
long long fact(long long n)
{
    if(n==1)
        return 1;
    return n * fact(n-1);
}
pair<int ,char>p;
pair<int ,char>p1;
pair<int ,char>p2;
int main(){
    char s[3];
    char s1[3];
    char s2[3];
    scanf("%s",s);
    scanf("%s",s1);
    scanf("%s",s2);
    p.first=s[0]-'0';
    p.second=s[1];

    p1.first=s1[0]-'0';
    p1.second=s1[1];

    p2.first=s2[0]-'0';
    p2.second=s2[1];

    if(p.second==p1.second && p.second==p2.second){
        int mx=max(p.first,max(p1.first,p2.first));
        int mn=min(p.first,min(p1.first,p2.first));
        int mid;
        if((mx==p.first && mn==p1.first) || (mn==p.first && mx==p1.first ))
        mid=p2.first;
        else if((mx==p1.first && mn==p2.first) || (mn==p1.first && mx==p2.first ))
        mid=p.first;
        else
        mid=p1.first;
        if(mx==mn && mx==mid)
        printf("0\n");
        else if(mx==mid+1 && mid==mn+1)
        printf("0\n");
        else if(mx==mn || mx==mid || mx==mid+1 || mx==mn+2 || mid==mn+2 ||mn==mid ||  mid==mn+1 )
        printf("1\n");
        else
        printf("2\n");
        return 0;
    }
    else{
        if(p.second==p1.second){
            int mx=max(p.first,p1.first);
            int mn=min(p.first,p1.first);

            if(mx==mn){
                printf("1\n");
                return 0;
            }
            else if(mx==mn+1 || mx==mn+2){
                printf("1\n");
                return 0;
            }

        }

        if(p1.second==p2.second){
            int mx=max(p1.first,p2.first);
            int mn=min(p1.first,p2.first);

            if(mx==mn){
                printf("1\n");
                return 0;
            }
            else if(mx==mn+1 || mx==mn+2){
                printf("1\n");
                return 0;
            }
            }
         if(p.second==p2.second){
            int mx=max(p.first,p2.first);
            int mn=min(p.first,p2.first);

            if(mx==mn){
                printf("1\n");
                return 0;
            }
            else if(mx==mn+1 || mx==mn+2){
                printf("1\n");
                return 0;
            }

        }
        printf("2\n");


}

}
