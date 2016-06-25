/* 
 * File:   main_AvgOfValues.cpp
 * Author: Elise Chue
 * Created on June 22, 2016, 3:12 PM
 * Purpose: Calculating Average
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
    int x1=28;//integer number
    int x2=32;
    int x3=37;
    int x4=24;
    int x5=33;
    float sum;//total before averaging
    float avg;//average of the sums
    
    //Input data
    
    
    // Process data
    sum=x1+x2+x3+x4+x5;
    avg=sum/5;//alternatively could have set # of values to n variable
    
    //Output data
    cout<<"The sum of the values is = "<<sum<<endl;
    cout<<"The average of the values is = "<<avg<<endl;
 
    
    //Exit Stage Right!
    return 0;
}

