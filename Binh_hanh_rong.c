#include<stdio.h>

int main() {

	int N;
	scanf("%d", &N);
	
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=2*N-i; j++) {
			if (j<=(N-i)) {
				printf("~");
			} else {
				if (i==1 || i==N || j==N-i+1 || j==2*N-i) {
					printf("*");
				} else {
					printf(".");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
//		123456789
//		~~~~*****
//		~~~*...*
//		~~*...*
//		~*...*
//		*****