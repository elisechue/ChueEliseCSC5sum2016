/* 
 * File:   main_FibonacciCrud.cpp
 * Author: Elise Chue
 * Created on June 30, 2016, 12:29 PM
 * Purpose: Fibonacci Crud
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip> // Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float crudWt,crrntWt; //crud weight in lbs
    int fi=1,fip1=1,fip2;//Fibonacci sequence 
    int days=0;          //Number of days
    
    //Input data
    cout<<"How many lbs of crud do you have"<<endl;
    cin>>crudWt;
    
    //Process data - Day 0
    crrntWt=crudWt*fi;
    cout<<" Fi | Days | Weight "<<endl;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Process data - Day 5
    crrntWt=crudWt*fi;
    days+=5;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Process data - Day 10
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    crrntWt=crudWt*fi;
    days+=5;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Process data - Day 15
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    crrntWt=crudWt*fi;
    days+=5;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Process data - Day 20
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    crrntWt=crudWt*fi;
    days+=5;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Process data - Day 25
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    crrntWt=crudWt*fi;
    days+=5;
    cout<<setw(2)<<fi<<setw(6)<<days<<setw(7)<<crrntWt<<endl;
    
    //Output data
    
    //Exit Stage Right!
    return 0;
}

