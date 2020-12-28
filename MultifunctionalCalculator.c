#include <stdio.h>
#include "math.h"

float calculator(int, float, float);
float addition(float, float);
float subtraktion(float, float);
float multiplikation(float, float);
float division(float, float);
float flaecheRechteck(float, float);
float umfangRechteck(float, float);
float radius(float);
float flaecheKreis(float);

void main()
{
	float tabl[200];
	float tablein1[200];
	float tablein2[200];
	char end = ' ';
	int option[200];
	float zahl1 = 0;
	float zahl2 = 0;
	int anz;
	for(int i = 0; i < 200 && end != 'e' && end != 'E'; i++)
		{
			printf("Addition: 0\nSubtraktion: 1\nMulitplikation: 2\nDivision: 3\nRechteck Flaecheninhalt: 4\nRechteck Umfang: 5\nKreis Flaecheninhalt (Geben sie den Radius an): 6\nRadius berechnen (Geben sie den Durchmesser an): 7\n\n");
			printf("Geben sie die gewuenschte Rechenoperation an\n");
			scanf_s("%d",&option[i]);
			fflush(stdin);
			printf("Geben sie den 1. Wert an\n");
			scanf_s("%f",&zahl1);
			fflush(stdin);
			tablein1[i]=zahl1;
			if(option[i]!=6&&option[i]!=7)
			{
			printf("Geben sie den 2. Wert an\n");
			scanf_s("%f",&zahl2);
			fflush(stdin);
			tablein2[i]=zahl2;
			}
			tabl[i]=calculator(option[i], zahl1, zahl2);
			printf("%.2f\n",tabl[i]);
			printf("E oder e um den Rechner zu schliessen und ihre Rechnungen mitsamt Ergebnissen ausgeben zu lassen, oder eine beliebige andere Taste um den Taschenrechner erneut aufzurufen.\n");
			scanf_s("%c",&end);
			fflush(stdin);
			anz=i;
		}
		for(int i = 0; i <= anz; i++) {
			printf("%.2f\t Rechenart: %d\t",tablein1[i],option[i]);
			printf("%.2f\t",tablein2[i]);
			printf(" = %.2f\n",tabl[i]);
		}
}

float calculator(int z, float a, float b)
{
	float ergebniss = 0;
	if(z==0)
		ergebniss=addition(a,b);
	else if(z==1)
		ergebniss=subtraktion(a,b);
	else if(z==2)
		ergebniss=multiplikation(a,b);
	else if(z==3)
		ergebniss=division(a,b);
	else if(z==4)
		ergebniss=flaecheRechteck(a,b);
	else if(z==5)
		ergebniss=umfangRechteck(a,b);
	else if(z==6)
		ergebniss=flaecheKreis(a);
	else if(z==7)
		ergebniss=radius(a);
	return ergebniss;
}

float addition(float a, float b)
{
	float c=a+b;
	return c;
}
float subtraktion(float a, float b)
{
	float c=a-b;
	return c;
}
float multiplikation(float a, float b)
{
	float c=a*b;
	return c;
}
float division(float a, float b)
{
	float c=a/b;
	return c;
}
float flaecheRechteck(float a, float b)
{
	float c=a*b;
	return c;
}
float umfangRechteck(float a, float b)
{
	float c=2*a+2*b;
	return c;
}
float flaecheKreis(float rad)
{
	float kreisFlaeche = 3.1415*(rad*rad);
	return  kreisFlaeche;
}
float radius(float durchmesser)
{
	float radius=durchmesser/2;
	return radius;
}
