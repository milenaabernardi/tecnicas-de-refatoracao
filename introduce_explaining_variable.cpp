#include <iostream>
using namespace std;

const double DISCOUNT_PERCENTAGE = 0.1;
const double TAX_PERCENTAGE = 0.05;

double calculatePriceWithDiscountAndTax(double price){
    double discount = price * DISCOUNT_PERCENTAGE;
    double discountedPrice = price - discount;
    double tax = discountedPrice * TAX_PERCENTAGE;
    double finalPrice = discountedPrice + tax;
    return finalPrice;
}

int main(){
    double price, finalPrice;
    price = 100.0;
    finalPrice = calculatePriceWithDiscountAndTax(price);
    cout << "O preco final e: " << finalPrice << endl;
    return 0;
}