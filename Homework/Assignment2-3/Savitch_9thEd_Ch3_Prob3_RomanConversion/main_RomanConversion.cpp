/* 
 * File:   main_RomanConversion.cpp
 * Author: Elise Chue
 * Created on June 30, 2016, 1:05 PM
 * Purpose: Convert Numbers to Roman Numerals
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
    unsigned short x;                   //Number to convert
    unsigned char n1000s,n100s,n10s,n1s;//strip off the digits
    
    //Input data
    cout<<"Input a number from 1000 to 4999 to convert "<<endl;
    //we dont know the 5,000 or 10,000 and beyond numerals
    cout<<"to a Roman Numeral"<<endl;
    cin>>x;
    
    //Process data
    if(x<1||x>4999)return 1;
    
    //Output data
    //Thousands Position
    n1000s=(x-x%1000)/1000;
    x-=n1000s*1000;
    switch (n1000s){
        case 4:cout<<"M";
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    
    //Hundreds Position
     n100s=(x-x%100)/100;
     x-=n100s*100;
    switch (n100s){
        case 9:cout<<"CM"  ;break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC" ;break;
        case 6:cout<<"DC"  ;break;
        case 5:cout<<"D"   ;break;
        case 4:cout<<"CD"  ;break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    
    //Tens Position
     n10s=(x-x%10)/10;
     x-=n10s*10;
    switch (n10s){
        case 9:cout<<"XC"  ;break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX" ;break;
        case 6:cout<<"LX"  ;break;
        case 5:cout<<"L"   ;break;
        case 4:cout<<"XL"  ;break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
    
    //Ones Position
     n1s=(x-x%1)/1;
     x-=n10s*10;
    switch (n1s){
        case 9:cout<<"IX"  ;break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII" ;break;
        case 6:cout<<"VI"  ;break;
        case 5:cout<<"V"   ;break;
        case 4:cout<<"IV"  ;break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    
    //Exit Stage Right!
    return 0;
}

