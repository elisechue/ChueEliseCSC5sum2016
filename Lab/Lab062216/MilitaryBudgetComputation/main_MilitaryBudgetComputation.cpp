/* 
 * File:   MilitaryBudgetComputation (main.cpp)
 * Author: Elise Chue
 * Created on June 22, 2016, 12:27 PM
 * Purpose: Military Budget Computation
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//stream manip
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float milBudg=585e9f;//~598.5 Billion https://www.nationalpriorities.org/campaigns/military-spending-united-states/
    float fedBudg=3.8e12f;//3.54 Trillion http://federal-budget.insidegov.com/l/119/2016-Estimate
    float percent;
    const int SIZE=81;
    char guess[SIZE];
    
    //Input data
    cout<<"Guess the percentage of the Federal Budget attributed to the Military"<<endl;
    cin.getline(guess,SIZE);
    
    // Process data
    percent=(milBudg/fedBudg)*100;
            
    //Output data
    cout<<"The Military Budget = $"<<milBudg<<endl;       
    cout<<"The Federal Budget = $"<<fedBudg<<endl;
    cout<<"The Military Budget percentage = "<<percent<<"%"<<endl;
    cout<<"Your guess was ="<<guess<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}

