#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,A;
	printf("Enter sides of triangle\n");
	scanf("%f %f %f",&a,&b,&c);
	A=acosf((((b*b)+(c*c)-(a*a))/(2*b*c)));

	printf("Angle A=%f\n",(A*180)/3.14);
	return 0;

}

