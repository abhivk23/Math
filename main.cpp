// Runner file
#include "mmath.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    /* The difference between perimeters of regular polygons inscribing and circumscribing the unit circle (D=1)
    converges to PI the as number of sides n-->infinity. */
    cout << "****************************************" << endl;
    cout << "Testing Archimedes method of deriving pi" << endl; 
    cout << "****************************************" << endl;
    // specify number of sides for testing
    for(int n=3; n<13; n++){
        cout << "Perimeter of Inscribed Polygon (r=0.5, n=" << n << "): " << inscribed_polygon_perimeter(n,0.5) << endl;
        cout << "Perimeter of Circumscribed Polygon (R=0.5, n=" << n << "): " << circumscribed_polygon_perimeter(n,0.5) << endl;
        double approx_pi = archimedes_pi(n);
        cout << "Approximation of pi= " << approx_pi << endl;
    }
    return 0;
}
