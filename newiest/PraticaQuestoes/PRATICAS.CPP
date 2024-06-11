#include <bits/stdc++.h>

using namespace std;

int main(){ 

int N;
int pot = 1;
cin >> N;

for (int i =0; i<N; i++) {
  
    cout << pot << " ";
    pot = pot *2;
    
}

return 0;

}