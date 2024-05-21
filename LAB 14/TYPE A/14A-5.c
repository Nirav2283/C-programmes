#include<stdio.h>
//weight and height for 5 person
void main(){
	int w[5],h[5],i,count=0;
	for(i=1;i<=5;i++){
	printf("Enter height and weight of %d person: ",i);
	scanf("%d %d",&h[5],&w[5]);

	if(h[i]>170 && w[i]<50){
		count++;
	}
	
}
printf("person whose height is greater than 170 and less than 50 is: %d",count);
}

