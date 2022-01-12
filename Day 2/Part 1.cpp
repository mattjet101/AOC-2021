#include <iostream>
#include <vector>

using namespace std;

int main() {
    int axis[2] = {0,0};
    
    string s;
    int m;
    
    while (cin >> s >> m)
        if (s == "forward") 
            axis[0] += m;
        else if (s == "up")
            axis[1] -= m;
        else if (s == "down")
            axis[1] += m;
            
    cout << "Horizonal: " << axis[0] << endl;
    cout << "Vertical: " << axis[1] << endl;
    cout << "Product: " << axis[0] * axis[1] << endl;
}
