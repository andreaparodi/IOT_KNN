#include"vector_extraction.h"

float calculateMean(float vect[])
{
	float mean = 0.0;
	
	int i;
	for (i = 0; i<vectorLength; i++)
	{
		mean = mean + vect[i];
	}
	mean = mean / vectorLength;
	return mean;
}
float calculateVar(float vect[], float mean)
{
	float var = 0.0;
	//int length = sizeof(vect)/sizeof(vect[0]);
	int i;
	for (i = 0; i<vectorLength; i++)
	{
		var += pow((vect[i] - mean), 2);
	}
	var = var / vectorLength;

	return var;
}

float calculateCorr(float vect1[], float vect2[], int med1, int med2, int stdDev1, int stdDev2)
{
	float corr = 0.0;
	int i;
	for (i = 0; i<vectorLength; i++)
	{
		corr = (vect1[i] - med1);
		corr = corr*(vect2[i] - med2);
	}
	corr = corr / vectorLength;
	corr = corr / (stdDev1*stdDev2);
	return corr;
}
