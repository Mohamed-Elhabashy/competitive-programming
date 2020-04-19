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
vector<string>v;

int main(){
    int n=d();
    string s1="",s2="";
    int x=n-1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            if(i==j){
                s1+=s[j];
            }
            else if(j==x){
                s1+=s[j];

                }

            else
                s2+=s[j];


        }
        x--;

    }
    if(s1[0]==s2[0]){
        printf("NO\n");
        return 0;
        }
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s1[i+1] && i+1<s1.length()){
            printf("NO\n");
            return 0;
            }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]!=s2[i+1] && i+1<s2.length()){
            printf("NO\n");
            return 0;
            }
    }

    printf("YES\n");
}
