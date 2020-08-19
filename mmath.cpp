// mmath.cpp -- personal
// Collection of (hopefully) faster or more interesting computational techniques

#include "mmath.h"
#include <vector>

float newton_sqrt(float A, float x0){
    float x1 = 0.5*(x0+A/x0);
    std::vector<float> x{x0, x1};
    
    int j=1;
    while((x[j-1]-x[j]) > 0.000001){
        x[j+1] = 0.5*(x[j]+A/x[j]);
        j++;
    }

    return x[j];
}
