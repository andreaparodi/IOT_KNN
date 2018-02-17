#pragma once

#include "main.h"
#define nOfSamples 20
#define nOfFeatures 5

float calculateDistance(float feature_vect1[], float feature_vect2[]);
void findKNN(float trainingFeatures[nOfSamples][nOfFeatures], int index[], float sampleFeatures[]);
int classificate(int labels[], int indexes[]);