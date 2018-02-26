#include <iostream>
#include  <cmath>
using namespace std;

int main(){
    int xParadas, xPiso;
    
    cin >> xParadas;
    int xTiempo = 0;
    
    for (int i = 0; i < xParadas; i++){
        cin >> xPiso;
        int xDef,xPrev;
        xPrev = abs(xPiso);
        xDef = abs(xPiso-xPrev);
        xTiempo += xDef;
        }
    
    cout<<xTiempo<<endl;
    return 0;
    
    
    
    
}
