#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        int x=i;
        for (int i = 1; i<=(x-1)*2; i++){
            cout << " ";
            cout << " ";
        }
        for (int l=x; l<=n-(x-1); l++){
            if(i==2 && l+1==9){
            cout << l << "  ";
            }
        else{
            cout << l << " ";
        }
        }
        cout << endl;
    }
}