#include <iostream>
using namespace std;

int main(){
	int in1,c=1,i,n,in2,cn1,re,cost[36];
	
	cin>>in1;
	while(c<=in1){
		cout<<"Case "<<c<<":"<<endl;
		
		for(i=0;i<36;i++){
			cin>>cost[i];
		}
		
		cin>>n;//輸入數字數量 
		while(n--){
			cin>>in2; 
			
			int min=0,de[37]={0}; 
			
			for(i=2;i<=36;i++) {
				cn1=in2;//元の数字は変更できないので変数に追加
				int sum=0;
				
				while(cn1>0) {			
					re=cn1%i;
					sum=sum+cost[re];
					cn1=cn1/i;
				}
				
				if(min==0||sum<=min) {
					de[i]=sum;
					min=sum;
				}
			}
			
			cout<<"Cheapest base(s) for number "<<in2<<":";
			
			for(i=2;i<=36;i++){
				if(de[i]==min)/
				{
					cout<<" "<<i;
				}
			}
			cout<<endl;
		}
		
		if(c<in1) {
			cout<<endl;
		}
		c++;
	}
	return 0;
}
