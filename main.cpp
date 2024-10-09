#include <iostream>
using namespace std;

float calcolaArea (float r){
   float area;
   area = 3.14 * (r*r);
   return area;
}

float calcolaCirconferenza (float r){
   float circo;
   circo = 3.14 * (r*2);
   return circo;
}

int main() {
    float r1, r2, area1, area2, circo1, circo2;
    cout << "Inserisci il raggio del cerchio 1";
    cin >> r1;
    cout << "Inserisci il raggio del cerchio 2";
    cin >> r2;
    area1 = calcolaArea(r1);
    area2 = calcolaArea(r2);
    circo1 = calcolaCirconferenza(r1);
    circo2 =calcolaCirconferenza(r2);
    cout << "L'area del cerchio 1 è: " << area1 << endl;
    cout << "L'area del cerchio 2 è: " << area2 << endl;
    cout << "La circonferenza del cerchio 1 è: " << circo1 << endl;
    cout << "La circonferenza del cerchio 2 è: " << circo2 << endl;


}


