#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,sum=0,sum_x=0,sum_y=0,sum_z=0;
	scanf("%d",&n);
for(int i=0;i<n;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		sum_x+=x;
		sum_y+=y;
		sum_z+=z;
		
}
	if(sum_x==0&&sum_y==0&&sum_z==0)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}