#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;
    double finScholarship;
    bool isStudent, isCS, isFemale;


    //PROMPT
    cout << "Input letter for your answer\n";
    cout << "Enter STATUS: \n" << "[A] Student\n" << "[B] Other\n";
    cin >> status;

    cout << "Enter GENDER:\n" << "[C] Female\n" << "[D] Male\n" << "[E] Other\n";
    cin >> gender;

    cout << "Enter MAJOR:\n" << "[F] CS\n" << "[G] Other\n";
    cin >> major;

    //Convert prompt to boolean

    if (status == "A"){
        isStudent = true;
    }
    else {
        isStudent = false;
    }
    
    if (gender == "C"){
        isFemale = true;
    }
    else{
        isFemale = false;
    }
    
    if (major == "F"){
        isCS = true;
    }
    else{
        isCS = false;
    }
    
    // cout << isStudent << endl << isFemale << endl << isCS << endl;

    
    //boolean logic here
    
    if (!isStudent){

        if (isCS)
        factor = 0.5;
        
        if (!isCS)
        factor = 0.1;       
    }
    if (isStudent){

        if (!isCS){
            if (!isFemale)
            factor = 0.2;
            if (isFemale)
            factor = 1.0;
        }
        
        if (isCS){
            if (!isFemale)
            factor = 2.0;
            if (isFemale)
            factor = 3.0;

        }

    }

    // cout << factor;
    

    //math operations here
    finScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    cout << "You've inputted " << status << " " << gender << " and " << major << "." << endl;
    cout << "Your Scholarship is $" << finScholarship << endl;
    // TODO

    return 0;
}
