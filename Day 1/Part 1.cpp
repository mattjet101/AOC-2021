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
    for (int i = 1; i < v.size(); i++) {
        if ( v[i] > v[i-1] ) {
            count++;
        }
    }
    
    // Printing the total number of times the previous value is greater
    cout << "Total: " << count << endl;
    
    return 0;
}

