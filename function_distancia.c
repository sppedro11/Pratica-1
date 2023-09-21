
#include <math.h>
#include "function_distancia.h"
double distancia(double coordenada_1[],double coordenada_2[]){
    double dist;
    dist = sqrt(pow(coordenada_1[0] - coordenada_2[0], 2) + pow(coordenada_1[1] - coordenada_2[1], 2));
    return dist;
}

