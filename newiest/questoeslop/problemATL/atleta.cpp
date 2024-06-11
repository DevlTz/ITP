#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, N = 0;
    int quant_c = 0, quant_s = 0, quant_l=0;
    cin >> n;
    string S;
    for (int i=1; i<=n; i++){
        while(true){
            cin >> S;   
            if(S=="C"){
                quant_c++;
            }
             if(S=="S"){
                quant_s++;
            }
            if(S=="L"){
                quant_l++;
            }
            if(S=="F"){
                break;
            }
        }
    }  
    N = quant_c + quant_l + quant_s;
    cout << quant_c << " " << quant_s << " " << quant_l << " " << N << endl;
   
}