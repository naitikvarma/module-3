/*Q.16 Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include<stdio.h>
int main ()
{
	int Num;
	printf("\nEnter the temperature in centigrade = ");
	scanf("%d",&Num);
	
	if(Num<=0)
	{
		printf("Freezing weather");
	}
	
	else if(Num>0 && Num<=10)
	{
		printf("Very cold weather");
	}
	
	else if(Num>10 && Num<=20)
	{
		printf("Cold weather");
	}
	
	else if(Num>20 && Num<=30)
	{
		printf("Normal weather");
	}
	
	else if(Num>30 && Num<=40)
	{
		printf("Hot weather");
	}
	else 
	{
		printf("Very hot weather");
	}
	return 0;
}

