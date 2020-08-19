// Abhi Kauturu
// A square root solver based on Newton's Method of root-finding

#include <iostream>
#include <vector>

float square_root(float A, float x0){
    float x1 = 0.5*(x0+A/x0);
    std::vector<float> x{x0, x1};
    
    int j=1;
    while((x[j-1]-x[j]) > 0.000001){
        x[j+1] = 0.5*(x[j]+A/x[j]);
        j++;
    }

    return x[j];
}

int main() {
    std::cout << square_root(42,7.0) << "\n";
    return 0;
}
