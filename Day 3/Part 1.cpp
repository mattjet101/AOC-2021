#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> r;
    string s;
    
    string a = "";
    string b = "";
    int colTotal = 0;
    
    while (cin >> s)
        r.push_back(s);
        
    for (int i = 0; i < r[0].length(); i++) {
        for (int j = 0; j < r.size(); j++) {
            int x = stoi(r[j][i]);
            colTotal += x;
            cout << i << " " << r[j] << " " << r[j][i] << " " << colTotal << endl;
        }
        if (colTotal < r.size())
            a += "0";
        else
            a += "1";
    }
    cout << "Gamma Rate: " << a << endl;
}
