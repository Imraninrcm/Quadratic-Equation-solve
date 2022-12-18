#include<stdio.h>
#include<math.h>
                // the quadratic equation solve have made by sridhar acharya mathematician
int main(){
	int a,b,c;  // a,b,c are real number in the equation, ax^2 + bx + c = 0 
	printf("Enter a,b,c : ");     
	scanf("%d %d %d", &a, &b, &c);
	
	float x1, x2, d;// d=discriminant, x1 = +x and x2 = -x
	d =sqrt((b*b)-4*a*c);
	
	x1=((-b +d)/(2*a));
	x2=((-b -d)/(2*a));
	
	printf("X+ = %f\n", x1); 
	printf("X- = %f\n", x2);
	return 0;
}
