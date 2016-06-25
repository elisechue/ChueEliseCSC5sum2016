/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 23, 2016, 7:51 PM
 * Purpose: Convert number of acres to square feet
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float acre=43560;//# of sq feet in 1 acre
    float ft=391876;//given number of sq feet
    float cnvrsn;//conversion of acres to feet
    
    //Input data

    //Process data
    cnvrsn=ft/acre;//
    
    //Output data
    
    cout<<"There are "<<cnvrsn<<" acres in 391,876 square feet."<<endl;
    
    //Exit Stage Right!
    return 0;
}

