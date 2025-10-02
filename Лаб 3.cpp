/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double d;
  const double g = 9.8;
  double phi, Fr;
  double n = 6.0;
  double v, index;
 
  cout << "d = ";
  cin  >> d;
  d = d / 100.0;
 
  cout << "v = ";
  cin  >> v;
 
  cout << fixed << setprecision(3);
 
  for (index = 0; index < n; ++index) {
    cout << "v = ";
    cin  >> v;
    
    Fr = (v * v) / (g * d);
    
    if (Fr <  50.0) {
      phi = 0.05 * pow(Fr, 0.2);
    }
    else {
      phi = 0.35 * pow(Fr, 0.1);
    }
    
  cout << "phi =" << phi << "\t \t" << Fr << endl;
  }
  return 0;
}
