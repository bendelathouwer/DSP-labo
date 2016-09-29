#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

#ifdef M_PI
	#define PI M_PI
#else
#define PI 3,14
#endif
// functie prototipes
void GenerateSine(int, int , double, double , double, double );
//void AddWaves(double , double, double );

void main (void)
{

	// declaratie van de variable 
	double *x1;
	double *x2;
	double *x;
	
	int fs = 8000;

	int f1 = 1000 ;
	double A1 = 1 ;
	double  Sample1 = 8 ;  
	double  Phi1 = 0 ;
	
	int f2 = 2000 ;
	
	double A2 = 1 ;
	double  Sampel2 = 8 ;
	double  Phi2 = ((3 * M_PI) / 4);

	double lengte = 0 ;

	// dynamisch geheugen allocatie 
	x1 = (double *)  calloc(8, sizeof(double));
	x2 = (double *)  calloc(8, sizeof(double));
	x = (double *)   calloc(8, sizeof(double));

	GenerateSine(f1,fs,A1,Sample1,Phi1,x1);

//	GenerateSine(f2, fs, A2, Sample2, Phi2, x2);
	//AddWaves();

}

// eigenlijk functie 
void GenerateSine(f1, fs , A1, Sample1, Phi1,x1)
{
	x1 = A1*sin((2 * M_Pi) / (fs + Phi1));

//void  AddWaves()
//{

//}