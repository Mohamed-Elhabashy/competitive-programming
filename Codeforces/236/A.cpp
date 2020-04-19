#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int cnt=0;
    cin>>s;
    for (char i='a';i<='z';i++)
    {
        for (int j=0;j<s.length();j++)
        if (i==s[j])
		    {
			  cnt ++;
		      break ;
			}
    }
    if (cnt%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
}
