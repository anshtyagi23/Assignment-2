#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,r;
	printf("enter the constt for the circle eqn:\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("centre= (%f,%f)\n",-a/2,-b/2 );
	r=sqrt(((a/2)*(a/2))+((b/2)*(b/2))-c);
	printf("radius = %f\n",r );
	return 0;

}

