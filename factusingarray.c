#include<stdio.h>
void factorial(int);
int multiply(int[],int);
int size=1;
void factorial(int n){

	int result[1000000];
	result[0]=1;
	for(int i=2;i<=n;i++){
		size=multiply(result,i);
	}
	printf("Factorial of given no. %d is:-\n",n);
	for(int i=size-1;i>=0;i--){
		printf("%d",result[i]);
	}
}
int multiply(int result[],int a){
	int c=0,k=0;
	for(int i=0;i<size;i++){
		k=result[i]*a+c;
		result[i]=k%10;
		c=k/10;
	}
	while(c){
		result[size]=c%10;
		c=c/10;
		size++;
	}
	return size;
}
int main(){
	int n;
	scanf("%d",&n);
	factorial(n);
	return 0;
}
