#pragma once
#include "main.h"

float calculateMean(float vect[]);
float calculateVar(float vect[], float mean);
float calculateCorr(float vect1[], float vect2[], int med1, int med2, int stdDev1, int stdDev2);