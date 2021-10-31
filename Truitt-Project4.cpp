//Project 4: CS155
//Jared Truitt
//Midterm Average Calculator
//March 18, 2021

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS - ***DO NOT MODIFY***
/*name: printPrompt
  INCOMING:  An integer of possible values 1 through 4 indicating a specific graded activity  
  OUTGOING:  None
*/   
void printPrompt(int);

/*name: average
  INCOMING: None
  OUTGOING: The double average of the integer grades as entered by the user
*/
double average();

/*name: weightedAverage
  INCOMING: Four double values representing the averages for the four graded activities
  OUTGOING: The double value representing the weighted average for the course so far (a.k.a. the current grade)
*/
double weightedAverage(double, double, double, double);

/*name: outputAverages
  INCOMING: A double value representing the current grade and four double values for four graded activity averages
  OUTGOING: None
*/
void outputAverages(double, double, double, double, double);

//MAIN FUNCTION - ***DO NOT MODIFY***
int main(){
   double quizAvg, assignAvg, examAvg, projAvg, currentGrade;      
   int count = 1;
   while (count<=4){
      printPrompt(count);
      switch(count){
         case 1:
         //1 - getting the quiz grades 
            quizAvg = average();
            break;
         case 2:
         //2 - getting the assignment grades
            assignAvg = average();
            break;
         case 3:
         //3 - getting exam grades
            examAvg = average();
            break;
         case 4:
         //4 - getting project grades
            projAvg = average();
            break;
      }
      count++;
   }
   
   //get the current grade, based on the different averages and their weights.
   currentGrade = weightedAverage(quizAvg, assignAvg, examAvg, projAvg);
	
   
   outputAverages(currentGrade, quizAvg, assignAvg, examAvg, projAvg);

}
//END MAIN FUNCTION

//**YOUR FUNCTION DEFINITIONS START HERE - Put your code below this line**//
void printPrompt(int count){  //Prompt definition
    if(count == 1){     //If count == 1, prompt for quiz grades
        cout<<"Enter your quiz grades (-1 to end input):"<<endl;
    }
    else if(count == 2){ //if count == 2, prompt for assignment grades
        cout<<"Enter your assignment grades (-1 to end input):"<<endl;
    }
    else if(count == 3){ //if count == 3, prompt for exam grades
        cout<<"Enter your exam grades (-1 to end input):"<<endl;
    }
    else if(count == 4){ //if count == 4, prompt for project grades
        cout<<"Enter your project grades (-1 to end input):"<<endl;
    }
}   //void, no values return

double average(){   //Average definition
    double sum = 0, count = 0, input = 0;
    double average;
    while(input != -1){     //while-loop, runs while input does not equal -1
        cin>>input;         //read in input
        if(input != -1){    //if that input is not equal to -1 then add it to sum and add 1 to count
            sum += input;   //I did it this way so -1 wouldn't effect the last number on the line
            count++;
        }
    }
    average = double(sum/count);    //calculate average
    return average;     //return average to call function in main
}

double weightedAverage(double quizAvg, double assignAvg, double examAvg, double projAvg){ //weightedAverage definition
    double weightedAverage;     //Define variables for function
    double currentGrade;
    weightedAverage = (quizAvg * .15) + (assignAvg * .15) + (examAvg * .25) + (projAvg * .25); //Calculate weighted average
    currentGrade = double(weightedAverage/.80); //Calcualte the current grade by dividing by 80%
    return currentGrade; //return currentGrade to call function in main
}

void outputAverages(double currentGrade, double quizAvg, double assignAvg, double examAvg, double projAvg){ //outputAverages definition
    cout<<endl; //Add space
    cout<<"Your quiz average: "<<quizAvg<<endl;     //output quiz average
    cout<<"Your assigment average: "<<assignAvg<<endl;  //output assignment average
    cout<<"Your exam average: "<<examAvg<<endl;     //output exam average
    cout<<"Your project average: "<<projAvg<<endl;  //output project average
    cout<<"Your current grade in this course is: "<<currentGrade;   //output current grade
}
    
//**PLACE YOUR FUNCTION DEFINITIONS (a.k.a. IMPLEMENTATIONS) BELOW**

    

