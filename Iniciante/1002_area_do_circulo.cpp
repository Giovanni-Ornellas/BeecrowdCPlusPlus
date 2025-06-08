#include <iostream>
#include <cmath>
#include <iomanip>

#define n 3.14159

int main(){
    double area, raio;
    std::cin >> raio;
    area = pow(raio,2)*n;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;
    return 0;
}