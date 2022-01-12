#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Defining Vector with Input from site
    vector<int> v;
    int x;
    int count = 0;
    
    while ( (cin >> x) && (x != -1))
        
        v.push_back(x);
        
        //Used this to verify input was being added to the vector
        //cout << endl << "This number is: " << x << " ";
    
    //Going through vector to check for if value being checked is greater than previous vector value
    for (int i = 3; i < v.size(); i++) {
        
        int a = v[i] + v[i-1] + v[i-2];
        int b = v[i-1] + v[i-2] + v[i-3];
        
        if ( a > b ) {
            count++;
        }
    }
    
    // Printing the total number of times the previous value is greater
    cout << "Total: " << count << endl;
    
    return 0;
}
