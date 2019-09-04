#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,s,area;
	printf("Enter three sides of triangle\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area= %f\n",area );
	return 0;

}

