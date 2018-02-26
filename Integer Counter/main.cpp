
#include <iostream>

using namespace std;

int getInteger(){
    int iInputNumber;
    cin>> iInputNumber;
    return iInputNumber;
}

int calculateFiniteSum(int iTheirNumber){
    int iFinalNumber;
    iFinalNumber = (iTheirNumber * iTheirNumber + iTheirNumber) / 2 ;
    return iFinalNumber;
}
void showResult(int iOutNumber){
    cout<< iOutNumber<< endl;
}

int main() {
    int iFinalInteger,iAnswer;
    iFinalInteger = getInteger();
    iAnswer = calculateFiniteSum(iFinalInteger);
    showResult(iAnswer);
    return 0;
}
