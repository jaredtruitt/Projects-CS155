//Jared Truitt
//Project 3 - Hogwarts Magical Tally
//March 8, 2021
//Program calculates the winner and amount of votes from another file and prints the output in another document
#include <iostream>
#include <fstream>      //library for files input/output
#include <string>       //string library for names
using namespace std;

int main(){
    int input = 0;      //Declaring variables
    int pres1 = 0, pres2 = 0, vp1 = 0, vp2 = 0, tr1 = 0, tr2 = 0, sec1 = 0, sec2 = 0;
    double prescount, vpcount, trcount, seccount;   //double variables for accurate percentage
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("votes2.txt");  //Opens the input file
    while(inFile>>input){       //While loop, keeps going while there is still input in the file
        if(input == 1 || input == 2){   //If input is 1 or 2, add one count to the presidential election
            prescount++;
            if (input == 1){    //If input is 1, add a count to president candidate 1
                pres1++;
            }
            else{               //Else, add 1 count to president candidate 2
                pres2++;
            }
        }
        if(input == 3 || input == 4){   //If input is 3 or 4, add one count to the vice presidential election
            vpcount++;
            if(input == 3){     //If input is 3, add a count to vice president candidate 1
                vp1++;
            }
            else{               //Else, add 1 count to vice president candidate 2
                vp2++;
            }
        }
        if(input == 5 || input == 6){    //If input is 5 or 6, add 1 to the secretary election count
            seccount++;
            if(input == 5){     //If input is 5, add 1 count to secretary candidate 1
                sec1++;
            }
            else{               //Else, add 1 count to secretary candidate 2
                sec2++;
            }
        }
        if(input == 7 || input == 8){   //If input is 7 or 8, add 1 to the treasurer election count
            trcount++;
            if(input == 7){     //If input is 7, add 1 count to treasurer candidate 1
                tr1++;
            }
            else{               //Else, add 1 count to treasurer candidate 2
                tr2++;
            }
        }
    }
    string n1 = "Cedric Diggory";       //String names for easier output
    string n2 = "Harry Potter";
    string n3 = "Hermione Granger";
    string n4 = "Vincent Crabbe";
    string n5 = "Luna Lovegood";
    string n6 = "Susan Bones";
    string n7 = "Draco Malfoy";
    string n8 = "Neville Longbottom";
    
    double p1, p2, p3, p4, p5, p6, p7, p8;      //Percentage variables
    
    p1 = (double)(pres1 / prescount)*100;       //Percentage calculation for each candidate/election
    p2 = (double)(pres2 / prescount)*100;
    p3 = (double)(vp1 / vpcount)*100;
    p4 = (double)(vp2 / vpcount)*100;
    p5 = (double)(sec1 / seccount)*100;
    p6 = (double)(sec2 / seccount)*100;
    p7 = (double)(tr1 / trcount)*100;
    p8 = (double)(tr2 / trcount)*100;
    
    
    outFile.open("output.txt");                //Opens output file
    
    outFile<<"Presidential Election Winner:"<<endl;     //Print Presidental Election Winner
    if(pres2 > pres1){                                  //If presidential candidate 2 is greater than presidential candidate 1 then output pres2 before pres1 with WINNER
        outFile<<n2<<" - "<<pres2<<" votes - WINNER ("<<p2<<"%)"<<endl; //outFile to output to another file // this line is the winner line
        outFile<<n1<<" - "<<pres1<<" votes ("<<p1<<"%)"<<endl;  //Since pres2 < pres1, pres1 is printed below pres 2
    }
    else{                                               //Else, pres1 is bigger than pres2 so print pres1 first with WINNER tag
        outFile<<n1<<" - "<<pres1<<" votes - WINNER ("<<p1<<"%)"<<endl;
        outFile<<n2<<" - "<<pres2<<" votes ("<<p2<<"%)"<<endl;
    }
    outFile<<endl;
    
    outFile<<"Vice Presidential Election Winner:"<<endl;    //Output Vice Presidental Election
    if(vp2 > vp1){                                          //If vp2 is greater than vp1, then print vp2 first with WINNER, then print vp1
        outFile<<n4<<" - "<<vp2<<" votes - WINNER ("<<p4<<"%)"<<endl;
        outFile<<n3<<" - "<<vp1<<" votes ("<<p3<<"%)"<<endl;
    }
    else{                                                   //Else, vp1 is greater than vp2, so print vp1 first with WINNER, then print vp2
        outFile<<n3<<" - "<<vp1<<" votes - WINNER ("<<p3<<"%)"<<endl;
        outFile<<n4<<" - "<<vp2<<" votes ("<<p4<<"%)"<<endl;
    }
    outFile<<endl;
    
    outFile<<"Secretary Election Winner:"<<endl;            //SAME CONCEPT APPLIES TO THE RESET OF THE OUTPUT CODE, JUST DIFFERENT ELECTION OUTPUTS
    if(sec2 > sec1){
        outFile<<n6<<" - "<<sec2<<" votes - WINNER ("<<p6<<"%)"<<endl;
        outFile<<n5<<" - "<<sec1<<" votes ("<<p5<<"%)"<<endl;
    }
    else{
        outFile<<n5<<" - "<<sec1<<" votes - WINNER ("<<p5<<"%)"<<endl;
        outFile<<n6<<" - "<<sec2<<" votes ("<<p6<<"%)"<<endl;
    }
    outFile<<endl;
    
    outFile<<"Treasurer Election Winner:"<<endl;
    if(tr2 > tr1){
        outFile<<n8<<" - "<<tr2<<" votes - WINNER ("<<p8<<"%)"<<endl;
        outFile<<n7<<" - "<<tr1<<" votes ("<<p7<<"%)"<<endl;
    }
    else{
        outFile<<n7<<" - "<<tr1<<" votes - WINNER ("<<p7<<"%)"<<endl;
        outFile<<n8<<" - "<<tr2<<" votes ("<<p8<<"%)"<<endl;
    }
    
    inFile.close();     //Close both input and output files
    outFile.close();

    return 0;           //Return program to 0
}
