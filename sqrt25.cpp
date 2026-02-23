#include <iostream>
#include <iomanip>
using namespace std;


double sqrtBinarySearch(double n, double precision = 1e-6) {
    double low = 0, high = n;
    
    // Handle numbers less than 1
    if (n < 1) high = 1;

    double mid;

    while ((high - low) > precision) {
        mid = (low + high) / 2;

        if (mid * mid < n)
            low = mid;    // move right
        else
            high = mid;   // move left
    }

    return (low + high) / 2;
}

int main() {
    double number = 25;

    double result = sqrtBinarySearch(number);

    cout << fixed << setprecision(6);
    cout << "Square root of " << number << " = " << result << endl;

    return 0;
}