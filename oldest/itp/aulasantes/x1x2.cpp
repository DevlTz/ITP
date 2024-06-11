#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  
  double a, b , c, d;
 
  cout << fixed << setprecision(2);
   cin >> a >> b >> c;

  double x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
  double x2 = (-b-sqrt(b*b-4*a*c))/(2*a);


  cout << x1 <<" " <<x2 << "\n";

    // cout << -b + sqrt(b*b-4*a*c)/2 << endl;
    return 0;


}
