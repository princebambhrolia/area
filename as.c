#include<stdio.h>

int sum(int a){
	
	int result = a*a;
	
	return result;
	
}

int main(){
	
	int a;
	
	printf ("give one number : ");
	
	scanf("%d",&a);
	
	int add = sum(a);
	
	printf("%d",add);
	
	return 0;
}