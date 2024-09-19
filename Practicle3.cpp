#include <iostream>
using namespace std;

class Rectangle {
public:
       triangle() {
        length = 0;
        width = 0;
    }
    
    triangle(float l, float w) {
        length = l;
        width = w;
    }
    
    triangle(float l) {
        length = l;
        width = l; // Assuming width is 0 if not provided
    }
    
    float area() {
        return length * width;
    }

private:
    float length, width;
};

int main() {
    triangler1;
    triangle r2(5, 7);
    triangle r3(5);
    
    cout << "Area 1: " << r1.area() << endl;
    cout << "Area 2: " << r2.area() << endl;
    cout << "Area 3: " << r3.area() << endl; // Fixed "Area 2" to "Area 3"
    
    return 2;
}
  
