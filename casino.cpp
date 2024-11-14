#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
    
    char name[80],repeat;
    int balance,bet,num;
    int number,Rnumber;
    srand(time(0));
    
    cout<<"\t========WELCOME TO CASINO WORLD========";

    cout<<"\n\n\nWhat's your name : ";
    cin>>name;
    
    cout<<"\nEnter the starting balace to play game : $";
    cin>>balance;
    
    cout<<"\n\n\n\t=======CASINO NUMBER GUESSING RULES!======="<<endl;
    cout<<"1. Choose a number between 1 to 10"<<endl;
    cout<<"2. Winner gets 10 times of the money bet"<<endl;
    cout<<"3. Wrong bet, and you lose the amount you bet"<<endl;
    
    cout<<"\n\nYour current balance is $"<<balance<<endl;
   
	 
     do{
	 
     cout<<"Hey, "<<name<<", enter amount to bet : $";
     cin>>bet;
     cout<<"Guess any betting number between 1 & 10 :";
     cin>>number;
    
    
     Rnumber=rand() % 10+1;
     if (number==Rnumber){
    	 cout<<"You are in luck!! You have won Rs."<<bet*10<<endl;
			cout<<"The winnig number was : "<<Rnumber;
			balance=bet*10;
	  }
	  else {
	 	 cout<<"Oops, better luck next time !! You lost $ "<<bet<<endl;
	   	balance=balance-bet;
	  }
    
   	 cout<<"\n"<<name<<", You have balance of $ "<<balance;
   	 
   	 if (balance<=0){
   	 	break;
		 }
    
     cout<<"\n\n-->Do you want to play again (y/n)?";
     cin>>repeat;
    
   }while(repeat=='Y' || repeat=='y');
    
 
 
 	cout<<"\n\n\nThanks for playing the game. Your balance is $"<<balance; 

   
    return 0;
}
