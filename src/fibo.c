#include<stdio.h>

int fibo(int n){
    if (n <= 2) {
	return 1;	   
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int var;
    scanf("%d", &var);
    int i;
    for (i = 1; i <= var; i++) {
    	printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
