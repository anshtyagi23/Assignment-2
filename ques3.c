#include<stdio.h>
#include<math.h>
//Ansh Tyagi IT 11912079
int main(){
	float a,b,c,d,e,f,dist1,dist2,dist3,s,area;
	printf("Enter coordinates of the point:\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	dist1=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
	dist2=sqrt(((a-e)*(a-e))+((b-f)*(b-f)));
	dist3=sqrt(((e-c)*(e-c))+((f-d)*(f-d)));
	s=(dist1+dist2+dist3)/2;
	area=sqrt(s*(s-dist1)*(s-dist2)*(s-dist3));
	printf("Area = %f\n",area );
	return 0;

}

