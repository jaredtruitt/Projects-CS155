// Jared Truitt
// CS 155 - Project 2
// ISO 8601 to United States Date Converter
// February 22, 2021

#include <iostream>
using namespace std;

int main(){
    int iso;    //Define variables
    int year;
    int month;
    int day;
    
    cout<<"Enter a date in ISO 8601 format."<<endl;    // Prompt user for input
    cin>>iso;                                   // Set user inputted date to variable "iso"
    
    year = iso/10000;       // Date entered / 10000 calculates the year - the first four digits (1 - 4)
    month = (iso/100)%100;  // Date entered / 100 by the modulo of 100 calculates the month - the middle two digits (4 and 6)
    day = iso%100;          // Date entered % 100 gives the day - the last two digits (7 and 8)
    
    if (iso < 10000000 || iso > 99999999){      // Accounting for dates entered that are lower or higher than 8 digits
        cout<<"ERROR: Invalid length."<<endl;   // Output invalid length if the statement above is true
        return 0;                               // If true, end program
    }
    
    if (month < 1 || month > 12){               // Accounting for month entered that is lower than 1 or higher than 12
        cout<<"ERROR: Invalid month."<<endl;    // If true, output an ERROR
        return 0;                               // Then, end program
    }
    
    if(day < 1 || day > 31){                    // Accounting for day entered that is lower than 1 or higher than 31
        cout<<"ERROR: Invalid day."<<endl;      // If true, output an ERROR
        return 0;                               // Then, end program
    }
    
    if (month == 02 && day == 29){              // Accounting for Leap Years
        if ((year % 4 == 0 ) && (year % 100 != 0) || (year % 400 == 0)){    // If above statement is true, check this If statement
                                                // If this statement is true, then run as normal
        }
        else{                                   // If leap year calculation is not true, then run Else statement
            cout<<"ERROR: February only has 28 days in year "<<year<<"."<<endl;     // Output ERROR because date it not valid
            return 0;                           // Then, end program
        }
    }
    
    if (month == 02 && day > 29){               // Accounting for February only having a max of 29 days
        cout<<"ERROR: February only has a maximum of 29 days";      // Output ERROR if statement is true
        return 0;                               //Then, end program
    }
    
    if (month == 04 || month == 06 || month == 9 || month == 11){   // Accounting for months with only 30 days
        if (day > 30){                          // If month is April, June, September, or November and day entered is greater than 30
            cout<<"ERROR: Invalid day (There are not 31 days in this month)."<<endl;    //Then output ERROR
            return 0;                           //Then, end program
        }
    }
    cout<<month<<"/"<<day<<"/"<<year;           // Finally, if all checks out, output the entered date into the U.S. format
    return 0;                                   // End program
}