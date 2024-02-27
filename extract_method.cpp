#include <iostream>
#include <cmath>
using namespace std;

double calculateResult(double p, double r, double t){
    return p * pow(1 + r, t);
}

int main(){
    double p, r, t, result;
    p = 1000.0;
    r = 0.05;
    t = 2.0;
    result = calculateResult(p, r, t);
    cout << "o montante e: " << result << endl;
    return 0;
}