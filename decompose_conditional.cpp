#include <iostream>
using namespace std;

void printTemperatureMessage(double temperature){
    if (temperature > 100){
        cout << "muito quente!" << endl;
    } else if (temperature > 70){
        cout << "clima agradavel." << endl;
    } else if (temperature > 50){
        cout << "fresco." << endl;
    } else {
        cout << "muito frio!" << endl;
    }
}

int main(){
    double temperature;
    temperature = 60.0;
    printTemperatureMessage(temperature);
    return 0;
}