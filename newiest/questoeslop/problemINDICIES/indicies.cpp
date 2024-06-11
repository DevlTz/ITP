#include <bits/stdc++.h>
using namespace std;

int main(){
    double count, s, N;
    int n;
    cin >> n;
    cout << fixed << setprecision(2);
    for (int i=1; i<=n; i++){
        cin >> N;
        if(N>=0){
        
            s = s+N;
            count++;
        }
    }   
        if(N<0 || n<=0){
            cout << "A competicao nao possui dados historicos!";
        }
        else{
            N=s/count;
            cout << N << endl;    
        }

}