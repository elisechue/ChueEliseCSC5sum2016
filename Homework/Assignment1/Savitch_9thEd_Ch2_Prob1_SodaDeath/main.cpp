/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 23, 2016, 1:10 PM
 * Purpose: Determine how much diet soda could kill a human
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
    float msMass=35;//35g is the mass of the mouse
    float msKill=5;//5g of sweetener killed mouse
    float hmMass=45400;//Grams conversion of a 100 lb human
    float msSoda=350;//350g is mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener
    int nCans;//Number of cans to kill dieter
    
    //Input data

    // Process data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output data
    cout<<"The number of diet soda cans it would take to kill a dieter with mass = ";
    cout<<hmMass<<"(grams) would be = "<<nCans<<endl;
    
    //Exit Stage Right!
    return 0;
}

