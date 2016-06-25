/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 23, 2016, 6:23 PM
 * Purpose: Calculating Miles Per Gallon
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles!!!
    float gal=15;//Amount of gallons this car holds
    float miles=375;//distance in miles before needing to refuel
    float mpg;//Miles per gallon, to be determined
    
    //Input data

    //Process data
    mpg=miles/gal;
    
    //Output data
    cout<<"This car gets "<<mpg<<" miles per gallon."<<endl;
            
    //Exit Stage Right!
    return 0;
}

