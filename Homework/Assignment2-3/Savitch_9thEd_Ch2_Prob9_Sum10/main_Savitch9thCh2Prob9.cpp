/* 
 * File:   main_Savitch....Sum10.cpp
 * Author: Elise Chue
 * Created on June 27, 2016, 12:50 PM
 * Purpose: Copy sum
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int x;//number to input 10 times
    int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg=0;
    
    
    //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
     //Input data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//block of code with else statement
    else      sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x: 0; //ternary operator
    if(x<0)   sumNeg +=x;//independent if statement
    
    //Output data
    cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
    cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
    cout<<"Sum Odd      = "<<setw(5)<<sumOdd<<endl;
    cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
    cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;
    
    //Exit Stage Right!
    return 0;
}

