// mmath.cpp -- personal
// Collection of (hopefully) faster or more interesting computational techniques
#include "mmath.hpp"

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

// Given the circumradius and the number of sides, compute the perimeter of a regular polygon
double circumscribed_polygon_perimeter(int n, double R){
    double b = 2*R*sin(PI/n);
    return b*n;
}

// Given the inradius and the number of sides, compute the perimeter of a regular polygon
double inscribed_polygon_perimeter(int n, double r){
    double b = 2*r*tan(PI/n);
    return b*n;
}

// Approximate the area of the unit circle (pi) like the Greeks using an n-sided polygon
double archimedes_pi(int n){
    double upper_bound = circumscribed_polygon_perimeter(n,0.5);
    double lower_bound = inscribed_polygon_perimeter(n,0.5);
    return lower_bound+((upper_bound - lower_bound)/2);
}