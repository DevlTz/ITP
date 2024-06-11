#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

cout << fixed << setprecision(2);
double n;
double x1, y1, z1;
double x2, y2, z2;
double x3, y3, z3;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3;
    
    double n1 = (sqrt(x1*x1+y1*y1+z1*z1));
    double n2 = (sqrt(x2*x2+y2*y2+z2*z2));
    double n3 = (sqrt(x3*x3+y3*y3+z3*z3));
    
    n=n1;
    if(n2 < n)
    n=n2;
    if(n3 < n)
    n=n3;
    
    cout << n << endl;
    

    
}   