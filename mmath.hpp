// mmath.h -- header file of computational techniques
#include <vector>
#include <cmath>
#define PI 3.14159265359

// Fast square root solver based on Newton/Babylonian method
float newton_sqrt(float square, float first_guess);

// Find the perimeter of an n-sided polygon given its inradius
double inscribed_polygon_perimeter(int n, double r);

// Find the perimeter of an n-sided polygon given its circumradius
double circumscribed_polygon_perimeter(int n, double r);

// Approximate the area of the unit circle (pi) like the Greeks using an n-sided polygon
double archimedes_pi(int n);
