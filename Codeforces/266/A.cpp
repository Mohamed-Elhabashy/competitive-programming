#include<iostream>
using namespace std;
int main(){
int n;
int count=0;
string s;
cin>>n;
cin>>s;
for(int j=0;j<n;j++){
if(s[j]==s[j+1]){
count++;
}
}
cout<<count;
}
