/* 
 * File:   main_StockCommission.cpp
 * Author: Elise Chue
 * Created on June 24, 2016, 12:15 PM
 * Purpose: Calculate Stock Commission
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
    int nShares=750;//number of shares Kathryn bought
    float stkPrce=35;//stock price in $s
    float commish=.02;//commission to her stockbroker is 2%
    float valStk;//how much Kat paid for the stock in $s
    float cPaid;//how much Kat pays to stockbroker in $s
    float ttlPaid;//how much Kat paid altogether in $s
    
    //Input data

    //Process data
    valStk=nShares*stkPrce;
    cPaid=commish*valStk;
    ttlPaid=valStk+cPaid;
            
    //Output data
    cout<<"Amount paid for stock (w/o commission) $"<<valStk<<endl;
    cout<<"Amount paid for commission $"<<cPaid<<endl;
    cout<<"Total Amount paid $"<<ttlPaid<<endl;
    //Exit Stage Right!
    return 0;
}

