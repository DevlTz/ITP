#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    
//     for(int lin=0; lin <n; lin++){
//         for(int col =0; col <n-lin; col++){
//             if(lin != 0 || col != 0 || col == n - lin-1) {
//                 cout << "*";
//         }

//         // para ser asteriscos com espaço, lin e col = 0, para triangulo ao contrario fechado !=0
//         else{
//         cout <<" ";
//     }
//         }
//         cout<< endl;
//     }
// }






//    for(int lin=0; lin <n; lin++){
//         for(int col =0; col <n-lin; col++){
//             if(lin != 0 || col != 0 || col == n - lin-1) {
//                 cout << "*";
//         }

//         // para ser asteriscos com espaço, lin e col = 0, para triangulo ao contrario fechado !=0
//         else{
//         cout <<" ";
//     }
//         }
//         cout<< endl;
//     }
// }


//    for(int lin=1; lin <n; lin++){
//         for(int col =1; col <n; col++){
//             if(lin == 1 || lin == n || col == 1 || col ==n) {
//                 cout << "*";
//         }

//     
//         else{
//         cout <<" ";
//     }
//         }
//         cout<< endl;
//     }
// }
//figura 3//




   for(int lin=1; lin <n; lin++){
        for(int col =1; col <n; col++){
            if(lin % 2 ==1 || col % 2 == 1 || lin == n || col ==n) {
                cout << "*";
        }
        // para ser asteriscos com espaço, lin e col = 0, para triangulo ao contrario fechado !=0
        else{
        cout <<" ";
    }
        }
        cout<< endl;
    }
}
