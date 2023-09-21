#include "function_media.h"
#include <math.h>
double med_elementos(double vetor[],int k ){

int i;
double soma, med; 
    for (i=0;i < k; ++i){
        
        soma += vetor[i];
        med = soma / k;
    }
    return med; 
}
