/* 
 * File:   main_Grade_if_else.cpp
 * Author: Elise Chue
 * Created on June 28, 2016, 12:59 PM
 * Purpose: Grade with an if-else Calculator
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
    if     (score>=90)grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';
    
    //Output data
    cout<<score<<" equates to a(n) "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

