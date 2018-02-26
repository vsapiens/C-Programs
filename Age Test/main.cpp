//  Erick Gonzalez
//  A01039859
//  September, 2017
//  Age_Test.cpp
//  Age Test

#include <iostream>
using namespace std;

/*
 askAge
 This function asks for the user for its age
 Parameters: none
 Returns: Age (integer number)
*/
int askAge()
    {
    int iAge;
    cout<< "Please enter your age in years"<<endl;
    cin>> iAge;
    return iAge;
    }
        
void displayAge(int iNumber) {
        if (iNumber < 13)
            cout << "You are an kid!"<<endl;
        else {
            if (iNumber >13 && iNumber < 20)
                
                cout<<"You are a teenager!"<<endl;
            else
                cout<< "You are a adult!"<<endl;
        }
}


int main() {
    int iFinalAge;
    iFinalAge= askAge();
    displayAge(iFinalAge);
    return 0;
}
        
/*
 Analysis
 
 Input: Enter the age of the user as an integer
 Process: Identiy the age as a kid, teenager and adult (+18)
 Output: Establish whether the user is a kid, teenager or adult
 
 Design
 --input
 Start Process: Age_Identifier
     Write "Please enter your age"
 --process
     Read iAge
     if (iAge < 13)
         Write "You are a kid"
     else {
         Write "You are a teenager"
         if (iAge> 18)
             Write "You are an adult"
          }
 EndProcess
 */
 
 
