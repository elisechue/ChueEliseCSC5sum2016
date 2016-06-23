/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 22, 2016, 1:20 PM
 * Purpose: Determine Sum of Two Dice (Probability)
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <cstdlib> //Random Number function
#include <ctime>   //Time function
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    unsigned char die1,die2,sum;
    
    //Input data
    srand(static_cast<unsigned int>(time (0)));
    
    // Process data
    die1=rand()%6+1;//Random number [1,6]
    die2=rand()%6+1;//Random number [1,6]        
    sum=die1+die2;  //Random number [2,12]
    
    //Output data
    cout<<"Die 1 = "<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 = "<<static_cast<int>(die2)<<endl;
    cout<<"Sum   = "<<static_cast<int>(sum)<<endl;
    
    //Exit Stage Right!
    return 0;
}

