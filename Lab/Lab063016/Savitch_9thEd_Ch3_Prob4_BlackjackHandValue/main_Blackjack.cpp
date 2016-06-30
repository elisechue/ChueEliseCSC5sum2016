/* 
 * File:   main_Blackjack.cpp
 * Author: Elise Chue
 * Created on June 30, 2016, 1:50 PM
 * Purpose: Calculating hand value in blackjack
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
    char card;
    int value=0,excess=0;
    
    //Input data
    cout<<"Input a card A,T,J,K,Q,2-9"<<endl;
    cin>>card;
    
    //Process data
    //Evaluate the first card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    
    //Output data
    cout<<"The value of the hand at this point = "<<value<<endl;
    
     //Input data for second card
    cout<<"Input a card A,T,J,K,Q,2-9"<<endl;
    cin>>card;
    
    //Process data
    //Evaluate the second card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
    
    //Output data for second card + first card
    cout<<"The value of the hand at this point = "<<value<<endl;
    
      //Input data for a third card
    cout<<"Input a card A,T,J,K,Q,2-9"<<endl;
    cin>>card;
    
    //Process data
    //Evaluate the third card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
    
    //Output data for third card + second card + first card
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Exit Stage Right!
    return 0;
}

