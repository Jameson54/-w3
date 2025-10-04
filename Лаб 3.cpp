/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double g = 9.8;

int main() {
  double d;
  double phi, Fr;
  int vCount = 6.0;
  int v, index;
  int countOfDigitsAfterTheDecimalPoint = 3.0;
  
 
  cout << "d = ";
  cin  >> d;
 
  cout << fixed << setprecision(countOfDigitsAfterTheDecimalPoint);
 
  for (int vIndex = 0; vIndex < vCount; ++vIndex) {
    cout << "v = ";
    cin  >> v;
    
    Fr = (v * v) / (g * d);
    
    if (Fr <  50.0) {
      phi = 0.05 * pow(Fr, 0.2);
    } else {
      phi = 0.35 * pow(Fr, 0.1);
    }
    
  cout << "phi =" << phi << "\t \t" << Fr << endl;
  }
  
  return 0;
}
