#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    double Har = 0, Arit = 0, Geo = 1;
    double medHar = 0, medAr=0, prodGeo = 0;
    for (int i = 0; i < 10; i++){

        double n;
        cin >> n;

        Arit+=n;
        Geo*=n;
        Har+=1/n;
    }

        medAr = Arit/10; 
        prodGeo = pow(Geo, (1.0/10));
        medHar = 10/Har;
      
        double Erro_har = (medHar - medAr)/medAr;
        double Erro_geo = (prodGeo - medAr )/medAr;
        double Erro_med = (Erro_har + Erro_geo)/(2/100.0);
            
        cout << "Média aritmética é " << medAr << "\n";
        cout << "Média harmônica é " << medHar << "\n";
        cout << "Média geométrica é " << prodGeo << "\n";
        cout << "Erro médio é " << Erro_med <<" %\n";
        

}
