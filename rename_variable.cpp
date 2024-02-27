#include <iostream>
#include <cmath>
using namespace std;

double calculateCompoundInterest(double principal, double rate, double time){
    return principal * pow(1 + rate, time);
}

int main(){
    double principal, rate, time, result;
    principal = 1000.0;
    rate = 0.05;
    time = 2.0;
    result = calculateCompoundInterest(principal, rate, time);
    cout << "o montante e: " << result << endl;
    return 0;
}