/* 
 * File:   main_TotalPurchase.cpp
 * Author: Elise Chue
 * Created on June 22, 2016, 4:29 PM
 * Purpose: Determining Item Prices and Purchase Price
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//for rounding pennies
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float itm1=15.95f;//Price of item 1 in $s
    float itm2=24.95f;//Price of item 2 in $s
    float itm3=6.95f; //Price of item 3 in $s
    float itm4=12.95f;//Price of item 4 in $s
    float itm5=3.95f; // Price of item 5 in $s
    float sTax=.07f;  //Sales tax is 7%
    float subTtl;    //Price before tax in $s
    float ttlPrce;   //Price after tax in $s
    
    //Input data

    //Process data
    subTtl=itm1+itm2+itm3+itm4+itm5;
    ttlPrce=subTtl+(subTtl*sTax);
            
    //Output data
    cout<<"The Price of item 1 is = $"<<itm1<<endl;
    cout<<"The Price of item 2 is = $"<<itm2<<endl;
    cout<<"The Price of item 3 is = $"<<itm3<<endl;
    cout<<"The Price of item 4 is = $"<<itm4<<endl;
    cout<<"The Price of item 5 is = $"<<itm5<<endl;
    cout<<endl;
    cout<<"Cart Subtotal = $"<<subTtl<<endl;
    cout<<"Sales Tax is "<<sTax*100<<"%"<<endl;//for proper notation
    cout<<setprecision(4)<<endl;//shows rounded pennies in the total
    cout<<"Total Price = $"<<ttlPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}

