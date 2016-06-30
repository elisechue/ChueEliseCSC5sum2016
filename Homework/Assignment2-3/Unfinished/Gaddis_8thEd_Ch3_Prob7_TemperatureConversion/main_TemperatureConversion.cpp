/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on June 28, 2016, 12:34 PM
 * Purpose: Temperature conversion
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
    float ceq, cintrp, f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Input data
    cout<<"Input the temperature in degree Fahrenheit ";
    cout<<"for conversion to Celsius"<<endl;
    cin>>f;
    
    //Process data
    ceq=(f-32)*5/9;//Linear equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);//similar triangles or linear eq
    
    //Output the processed Data
    cout<<" deg Fahrenheit = "<<ceq<<endl;
    
    //Exit Stage Right!
    return 0;
}

