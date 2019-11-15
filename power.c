#include <stdio.h>
#include "myMath.h"
#define e 2.7182
double Exp(int x)
{
	double ans=Pow(e,x);
	return ans;
}
double Pow(double x,int y)
{
	double res=1;
	
	int i;
	if(y==0)
	{
		return 1;
	}
	else
	{
		if(y>0)
		{
			for(i=1;i<=y;i++)
			{
				res=res*x;
			}	
		}
		else//y<0
		{
			y=-y;
			for(i=1;i<=y;i++)
			{
				res=res*x;
			}
			return (double)(1)/res;	
		}			
	}
	return res;
}
	
