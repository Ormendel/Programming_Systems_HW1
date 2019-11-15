#include <stdio.h>
#include "myMath.h"


/**
*TODO (e^x) + (x^3) -2
*/
void func1(double x)
{
	double ans=Exp((int)x); //For the calculation in this assignment we are asked to take the integer part of x
	ans=add(ans,Pow(x,3));
	ans=sub(ans,2);
	printf("The value of f(x) = (e^x) + (x^3) -2 at the point %f is: %0.4f . \n",x,ans);
}

/**
*TODO 3x + 2 * (x^2)
*/
void func2(double x)
{
	
	double ans = Pow(x,2);
	ans=mul(ans,2);
	double add_me = mul(x,3);
	ans=add(ans,add_me);
	printf("The value of f(x) = 3x + 2 * (x^2) at the point %f is: %0.4f .\n",x,ans);
}

/**
*TODO (4*(x^3)) / 5 ) - 2x
*/
void func3(double x)
{
	double ans=mul(Pow(x,3),4);
	ans=div(ans,5);
	double sub_me=mul(x,2);
	ans=sub(ans,sub_me);
	printf("The value of f(x) = (4*(x^3)) / 5 ) - 2x at the point %f is: %0.4f . \n",x,ans);
}
int main()
{
	int i;
	printf("Enter how many numbers (amount) would you like to get: ");
	scanf("%d",&i);
	printf("\n");
	if(i<=0)
		return 0;
	double x;
	int count;
	for(count=1;count<=i;count++)
	{
		printf("Calculating on #%d number...\n",count);
		printf("Please insert a real number: ");
		scanf("%lf",&x);
		func1(x);
		func2(x);
		func3(x);
	}
	return 0;
}


