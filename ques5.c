#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,d,e,dist;
	printf("Enter the constants for the point:\n");
	scanf("%f %f",&a,&b);
	printf("Enter the constants for line cx+dy+e\n");
	scanf("%f %f %f",&c,&d,&e);
	dist=((c*a)+(d*b)+e)/(sqrt((c*c)+(d*d)));
	printf("the distance between the point and line = %f\n",dist );
	return 0;

}

