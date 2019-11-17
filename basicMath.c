#include <stdio.h>
#include "myMath.h"
float add(float x,float y)
{
	float res=x+y;
	return res;
}
float sub(float x,float y)
{
	float res=x-y;
	return res;
}
double mul(double x,int y)
{
	double res=x*y;

	return res;
}
double div(double x,int y)
{
	if(y==0)
	{
		printf("We can't divide any number by zero!\n");
		return -1;
	}
	double res=x/y;
	return res;
}
