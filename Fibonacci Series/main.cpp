//
//  main.cpp
//  Fibonacci Series
//
//  Created by Erick Gzz on 10/10/17.
//  Copyright © 2017 Erick Gzz. All rights reserved.
//
#include <iostream>
using namespace std;

#include "main.hpp"
int fibo(int iPosition)
{
    int iSum = 1;
    int iPrevSum = 1;
    int iPrevPrevSum = 1;
    
    for (int i = 2; i < iPosition-1; ++i)
    {
        iSum = iPrevSum + iPrevPrevSum;
        iPrevPrevSum = iPrevSum;
        iPrevSum = iSum;
    }
    
    return iSum;
}
int main(){
    int i;
    cin>>i;
    cout<<fibo(i)<<endl;
    return 0;
}
