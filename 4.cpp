#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius){
    return PI * radius * radius;
}

int main(){
    double radius, area;
    radius = 5.0;
    area = calculateArea(radius);
    cout << "a area e: " << area << endl;
    return 0;
}