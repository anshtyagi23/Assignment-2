#include<stdio.h>
#include<math.h>
int main(){
	float h,k,r,s,dist,len;
	printf("enter the coordinates of the centre: \n");
	scanf("%f %f",&h,&k);
	printf("enter the radius:\n");
	scanf("%f",&r);
	printf("enter the equation of line\n");
	scanf("%f",&s);
	dist=h-s;
	len=2*sqrt((r*r)-(dist*dist));
	printf("length of chord=%f\n",len );
	return 0;

}