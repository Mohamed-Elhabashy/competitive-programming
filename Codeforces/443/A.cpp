#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
char arr[N];
int a[26];
int main(){
   cin.getline(arr,N);
   int n=strlen(arr),cnt=0;
   for(int i=0;i<n;i++){
    if(arr[i]>='a' && arr[i]<='z'){
        if(a[arr[i]-'a']==0){
            cnt++;
            a[arr[i]-'a']++;
        }
    }
   }
   printf("%d\n",cnt);
}
