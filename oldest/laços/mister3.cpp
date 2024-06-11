#include <bits/stdc++.h>

using namespace std;

int main(){ 

int n, i , j;
    cin >> n;
i=0;
j=1;

while(i <= n){
    cout << i << endl;
    j+=i;
    i=j-i;
}

}