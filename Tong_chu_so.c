#include<stdio.h>

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int n, sum=0;
		scanf("%d", &n);
		while ((n%10)!=0 || n>0){
			sum+=(n%10);
			n/=10;
		}
		printf("%d\n", sum);
	}
		
	return 0;
}