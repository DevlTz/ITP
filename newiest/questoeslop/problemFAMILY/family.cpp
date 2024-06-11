#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int count = 1; count <= n; count++){
    for(int i = 1; i <= count; i++){
        
        cout << count * i << " "; 
    }
        cout << endl;
    }
}
