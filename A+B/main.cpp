//
//  main.cpp
//  A+B
//
//  Created by Erick Gzz on 10/11/17.
//  Copyright © 2017 Erick Gzz. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
#include <iostream>
using namespace std;

/* A+B 1000
 int getiNumber(){
 int iNumber;
 cin>>iNumber;
 return iNumber;
 }
 
 int calAB(int iA,int iB){
 int iSum;
 iSum= iA+iB;
 return iSum;
 }
 
 void displayResult(int iResult){
 cout<<iResult<<endl;
 }
 
 int main() {
 int iA,iB,iResult;
 iA= getiNumber();
 iB= getiNumber();
 iResult= calAB(iA,iB);
 displayResult(iResult);
 return 0;
 }
 */

int getiNumber(){
    int iNumber;
    cin>>iNumber;
    return iNumber;
}

int main() {
    int iNumber;
    while(iNumber !=42)
    {
        iNumber= getiNumber();
    }
    
    return 0;
    
}






