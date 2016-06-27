/* 
 * File:   main_MonthlyPayments.cpp
 * Author: Elise Chue
 * Created on June 27, 2016, 1:21 PM
 * Purpose: Equal Monthly Loan Payments 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip> //Format Library
#include <cmath>   //Math Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float loanAmt,intRate,nPymnts;//Inputs to the problem
    float mPymnt,ttlPaid,intPaid;//Outputs to the problem
    
    //Input data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amt $'s, Interest Rate %, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    //Process data
    //float temp=pow((1+intRate),nPymnts);
    float temp=exp(nPymnts*log(1+intRate));//Intermediate value 
    mPymnt=intRate*temp*loanAmt/(temp-1);  //Equal payment calculation
    ttlPaid=mPymnt*nPymnts;                 //Total paid with interest
    intPaid=ttlPaid-loanAmt;               //Financed opportunity cost
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment = $"<<setw(10)<<mPymnt<<endl;
    cout<<"Total Paid =      $"<<setw(10)<<ttlPaid<<endl;
    cout<<"Interest Paid =   $"<<setw(10)<<intPaid<<endl;        
    //Exit Stage Right!
    return 0;
}

