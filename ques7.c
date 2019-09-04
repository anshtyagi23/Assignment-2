#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,p,q,r,x,y;
	printf("enter the constt of line\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	x=((b*r)-(c*q))/((a*q)-(b*p));
	y=((a*r)-(c*p))/((b*p)-(a*q));
	printf("intersection=(%f,%f)\n",x,y );
	return 0;

}

