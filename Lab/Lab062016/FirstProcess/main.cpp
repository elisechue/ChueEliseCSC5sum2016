/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 20, 2016, 12:27 PM
 * Purpose: Program Utilizing a Process
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char cnum;//character number
    int inum;//integer number
    char cadd;//character variable for addition result
    
    //Input data
    cout<< "Type in 2 -> 1 digit numbers -> D D"<<endl;
    cin>>cnum>>inum;
    
    // Process data
    cadd=cnum+inum;
    
    //Output data
    cout<<"The character number = "<<cnum;
    cout<<" which has a value of "<<static_cast<int>(cnum)<<endl;
    cout<<"The integer number = "<<inum;
    cout<<" which has a value of "<<static_cast<int>(inum)<<endl;
    cout<<"The character number added = "<<cadd;
    cout<<" which has a value of "<<static_cast<int>(cadd)<<endl;
    
    //Exit Stage Right!
    return 0;
}

