#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    double radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area = pi * radius * radius;
    
    cout << "The area of the circle is: " << area << endl;
    
    return 0;
}
