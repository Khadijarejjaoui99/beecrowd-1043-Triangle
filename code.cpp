// beecrowd 1043 Triangle
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, b, c,Perimetro,Area;
    cin >> a >> b >> c;
    if((a+b)>c && (a+c)>b && (c+b)>a){
      Perimetro = a + b + c;
      cout << "Perimetro = " << fixed << setprecision(1)<< Perimetro <<endl;
    }else{
       Area = ((a+b)/2)*c;
       cout << "Area = " << fixed << setprecision(1) << Area <<endl;
    }
    system("pause");
    return 0;
}