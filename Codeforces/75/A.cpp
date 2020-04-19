#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e3,OO = 0x3f3f3f3f;
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

int main()
{
    string s,s1;
    cin>>s>>s1;
    int sum=stoi(s1)+stoi(s);
    string s3=to_string(sum);
    string s4="";
    for(int i=0;i<s3.length();i++){
        if(s3[i]!='0')s4+=s3[i];
    }
    string ss,s11;
    for(int i=0;i<s.length();i++){
         if(s[i]!='0')ss+=s[i];

    }
    for(int i=0;i<s1.length();i++){
         if(s1[i]!='0')s11+=s1[i];

    }
    sum=stoi(ss)+stoi(s11);
    s=to_string(sum);
    if(s==s4)
    puts("YES");
    else
    puts("NO");

}