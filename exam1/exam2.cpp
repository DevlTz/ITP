#include <iostream>
using namespace std;
int main() {
    int n;
    int tm;
    double tmx, tmi, maxD = 0;
    int maxH = 0;
    cin >> n;  

    for (int i = 0; i < n; ++i) {
        cin >> tm >> tmx >> tmi;
}
        double d = tmx - tmi;
        if (d > maxD) {
            maxD = d;
            maxH = tm;
        }
    
    cout << maxH << endl;

    return 0;
}
