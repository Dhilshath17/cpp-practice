#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b+c == 180){
    cout << "Triangle can be formed" << endl;
    } else{
    cout << "Triangle cannot be formed" << endl;
} 
  return 0;
}