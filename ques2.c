#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,d,distance;
	printf("Enter coordinates of the point:\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	distance=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
	printf("distance between the points = %f\n",distance );
	return 0;

}

