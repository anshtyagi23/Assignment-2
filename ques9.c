#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,d,e,f,g,h,dist,radius,pi,rad,area;
	printf("enter the constt for plane eqn:\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("enter the constt for sphere eqn:\n");
	scanf("%f %f %f %f",&e,&f,&g,&h);
	dist=((a*(-e/2))+(b*(-f/2))+(c*(-g/2))+d)/sqrt((a*a)+(b*b)+(c*c));
	radius=sqrt(((e/2)*(e/2))+((f/2)*(f/2))+((g/2)*(g/2))-h);
	pi=3.14;
	rad=sqrt((radius*radius)-(dist*dist));
	area=pi*rad*rad;
	printf("Area=%f\n",area );

	return 0;

}

