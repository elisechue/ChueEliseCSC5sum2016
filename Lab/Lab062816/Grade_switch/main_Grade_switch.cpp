/* 
 * File:   main_Grade_switch.cpp
 * Author: Elise Chue
 * Created on June 28, 2016, 1:08 PM
 * Purpose: Grade switch
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
    int score;  //Input [0,100])
    char grade; //output [A,B,C,D,F]

    //Input data
    cout<<"Input the score [0-100] output will be the grade"<<endl;
    cin>>score;

    //Process data
    switch(score/10){
        case 11:
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }

    //Output data
    cout<<score<<" equates to a(n) "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

