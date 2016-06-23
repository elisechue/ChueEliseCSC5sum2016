/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 23, 2016, 1:37 PM
 * Purpose: Paycheck calculation with Ternary Operator
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip> //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float hrsWrkd=20;//Hours worked
    float payRate=10;//$s/hr
    char  ovrTime=40;//overtime starts at 40hrs
    float payChk;   //Paycheck in $s
    
    //Input data

    // Process data
    payChk=hrsWrkd*payRate;
    payChk=hrsWrkd<ovrTime?//Test
    //     0              ://True
           hrsWrkd*payRate://True
           ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*0.5;//False
    //     hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate*0.5;//False
    //     ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;//False 
    
    //Output data
    cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<"hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChk<<endl;
    
    //Exit Stage Right!
    return 0;
}

