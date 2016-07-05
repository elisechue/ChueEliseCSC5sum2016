/* 
 * File:   main_ShowMeTheMoney.cpp
 * Author: Elise Chue
 * Created on July 5, 2016, 1:02 PM
 * Purpose: How to double your money (Pennies for Pay)
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//Format Library for the output
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int pennies=1;//Initial pay per day
    int payDay=0;// Pay at the end of the month
    
    //Input data
   
            
    //Process data and output simultaneously
    for(int day=1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(8)<<pennies/100;
        cout<<" Pay earned $"<<setw(12)<<payDay/100.0f<<endl;
        pennies*=2; 
    }
    
    //Output data
    
    //Exit Stage Right!
    return 0;
}

