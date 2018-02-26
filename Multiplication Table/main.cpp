//  Erick González
//  A01039859
//  main.cpp
//
//

#include <iostream>

using namespace std;

int getNumber(){
    int iNumber;
    cout<<"Please provide the number you want to be displayed in the multiplication number"<<endl;
    cin>> iNumber;
    return iNumber;
}


void displayMultiTable(int iNumber){
    int iCounter=1;
        while(iCounter <= 10){
            cout<< iNumber << " * "<<iCounter <<" = "<<(iNumber * iCounter++)<<endl;
    }
}

int main() {
    int iResult = getNumber();
    displayMultiTable(iResult);
    return 0;
}
