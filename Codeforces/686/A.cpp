#include<bits/stdc++.h>
using namespace std;
int main(){
	long long packs;
	int  n ,cnt=0,x;
	char c;
	cin>>n>>packs;
	for(n;n>0;n--){
		cin>>c>>x;
		if(c=='-'){
			if(packs>=x){
				packs-=x;
					
			}
			else
			cnt++;
			
		}
		else
		packs+=x;
	}
	cout<<packs<<" "<<cnt<<"\n";
	return 0;
}