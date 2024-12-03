#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    string firstName, lastName;
    int n;
    
    cin >> firstName >> lastName >> n;
    string FullName = firstName + lastName;

    for (int i = 0; i < n; i++) {
        cout << FullName << endl;
    }
    
    return 0;
}