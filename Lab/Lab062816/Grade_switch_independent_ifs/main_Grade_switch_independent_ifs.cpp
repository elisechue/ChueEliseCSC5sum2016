/* 
 * File:   main_Grade_switch_independent_ifs.cpp
 * Author: Elise Chue
 * Created on June 28, 2016, 1:20 PM
 * Purpose: Grade switch with independent ifs
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
    grade='F';//Defaulted Value
    if(score<=120&&score>=90)grade='A';//extra credit!! 100-120 :^)
    if  (score<90&&score>=80)grade='B';
    if  (score<80&&score>=70)grade='C';
    if  (score<70&&score>=60)grade='D';
          
    //Output data
    cout<<score<<" equates to a(n) "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

