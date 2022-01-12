#include <iostream>
#include <vector>

using namespace std;

int main() {
    //             x, y, aim
    int axis[3] = {0, 0, 0};
    
    string s;
    int X;
    
    while (cin >> s >> X)
        if (s == "forward") {
            axis[0] += X;
            axis[1] += axis[2] * X;
        }
        else if (s == "up") {
            axis[2] -= X;
        }
        else if (s == "down") {
            axis[2] += X;
        }
        
    cout << "Horizonal: " << axis[0] << endl;
    cout << "Vertical: " << axis[1] << endl;
    cout << "Aim: " << axis[2] << endl;
    cout << "Product: " << axis[0] * axis[1] << endl;
}
