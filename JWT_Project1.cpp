//Jared Truitt
//1
//Cinema Profit Calculator
//February 4, 2021

#include <iostream> 
#include <iomanip>      //Manipulator Operator
using namespace std;


int main(){ 
    const double adultTicketPrice = 7.50;       //Define adult ticket price variable as double and set equal to 7.50
    const double childrenTicketPrice = 4.75;    //Define children ticket price variable as double and set equal to 4.75
    double adultTicketsSold, childrenTicketsSold;   // Define variables for amount of adult and children tickets sold
    double grossBoxOffice, distributorAmount, netProfit;    //Define varibales for gross box office revenue, distributor amount, and the net profit
    char nameMovie[100];    //Set cstring for movie name and set max amount to 100 characters

    cout<<"What is the name of the movie? ";    //Prompt for user-input of movie name
    cin.getline(nameMovie,100);     //Stores user-inputted name
    cout<<"How many adult tickets sold? ";  //Prompt for user-input of amount of adult tickets sold
    cin>>adultTicketsSold;      //Stores user-inputted amount to variable adultTicketsSold
    cout<<"How many children tickets sold? ";   //Prompt for user-input of amount of children tickets sold
    cin>>childrenTicketsSold;   //Stores user-inputted amount to variable childrenTicketsSold
    cout<<endl;         //Tells the compiler to skip a line

    cout<<"Movie Name: ";   //Output for labeling
    cout<<setw(25)<<fixed<<nameMovie<<endl;    //Sets width to 25 for the movie name
    
    grossBoxOffice = (adultTicketPrice * adultTicketsSold) + (childrenTicketPrice * childrenTicketsSold);   //Logic to find gross box office revenue
    
    cout<<"Gross Box Office Revenue: "<<fixed<<setprecision(2)<<"$ "<<setw(2)<<grossBoxOffice<<endl;    //Outputs label for box office revenue and fixes
                                                                                                        //the numbers to output to two decimal places and 
                                                                                                        //sets the width for a table in the output

    distributorAmount = (grossBoxOffice * .8);      // Logic to find the distributor amount
    cout<<"Distributor Amount: "<<setw(8)<<fixed<<setprecision(2)<<"$ "<<distributorAmount<<endl;   //Outputs label for distributor amount and fixes
                                                                                                    //the numbers to output to two decimal places and
                                                                                                    //sets the width for a table in the output 
    
    netProfit = (grossBoxOffice - distributorAmount);   //Logic to find the net proft
    cout<<"Net Profit: "<<setw(16)<<"$ "<<setw(7)<<netProfit<<endl;     //Outputs label for the net profit and fixed the numbers to output
                                                                        //to two decimal places and sets the width and for a table in the output
    
    
    return 0;       //Return to 0
}    