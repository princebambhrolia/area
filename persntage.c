#include<stdio.h>

float sum (int v,int w,int x,int y,int z){
	
	int total = v+w+x+y+z;
	
	float result = total/5;
	
	printf("your mark total is :  %d\n", total);
	
	return result;
	
	
}

int main(){
	
	int v,w,x,y,z;
	
    printf("enter eny 5 number:\n");
    
    scanf("%d %d %d %d %d",&v,&w,&x,&y,&z);
    
    printf("your persentage : %.2f", sum(v,w,x,y,z));
    
    return 0;
}