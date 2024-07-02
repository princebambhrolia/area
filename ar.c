#include<stdio.h>

int sum(int l,int w){
	
	int result = l*w;
	
	return result;
	
}

int main(){
	
	int l,w;
	
	printf ("give two number : c");
	
	scanf("%d%d",&l,&w);
	
	int add = sum(l,w);
	
	printf("%d",add);
	
	return 0;
}