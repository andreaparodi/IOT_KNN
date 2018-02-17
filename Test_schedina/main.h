#pragma once
#include "vector_extraction.h"
#include "KNN.h"
#include <stdio.h>
#include <math.h>

//lunghezza dei vettori di sampling
#define vectorLength 10
//numero dei vettori di training
#define nOfSamples 20
//numero di features che vengono estratte (media acc, media direz, devstand acc, devstand direz, correlaz acc/direz)
#define nOfFeatures 5
//numero di vicini considerati
#define k 7

void main();