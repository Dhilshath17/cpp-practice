#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int mark;
    cin >> mark;
    
    if (mark>=90){
        cout << "Grade A" << endl;
    }else if (mark>=80){
        cout << "Grade B" << endl;
    }else if (mark>=60){
        cout << "Grade C" << endl;
    }else if (mark>=35){
        cout << "Grade D" << endl;
    }else if (mark<35){
        cout << "Fail" << endl;
    }
    return 0;
}

    