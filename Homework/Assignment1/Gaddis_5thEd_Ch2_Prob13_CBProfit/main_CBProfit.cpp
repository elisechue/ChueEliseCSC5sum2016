/* 
 * File:   main_CBProfit.cpp
 * Author: Elise Chue
 * Created on June 21, 2016 1:09pm
 * Purpose: Determine profit selling circuit board
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
    float profit=0.40f;//40 percent profit
    float cost=12.67f;//cost in $'s
    float selPrce;    //selling price in $'s
    
    //Input data
   
    // Process data
    //selPrce=cost*(1+profit)
    selPrce=cost*profit+cost;
    int pennies=selPrce*100+0.5;//Shift into pennies add a half to round
            selPrce=pennies/100.0f;
            
    //Output data
    cout<<"Cost of circuit to the company = $"<<cost<<endl;
    cout<<"Profit desired on cicuit board = $"<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}

