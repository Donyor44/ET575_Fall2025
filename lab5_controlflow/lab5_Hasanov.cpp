/*
Donyor hasaonv
lab 5, control flow
Sep 10, 2025
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main (){
    cout <<"\n ------------ Example 1: bool variable --------- " << endl;
    // check if a number is positive
    // step 1) declare and collect a number 
    int n;
    cout <<"Enter a number: ";
    cin>>n;
    // step 2) check if the number is positive 
    bool checkpositive = n>=0;
    // step 3) print the result
    cout<<"Is "<<n<<" positive ? "<<checkpositive<<endl;

    cout <<"\n ------------ Example 2: if statement --------- " << endl;    
    // change the checking_code to 999 if a number is positive 
    int checking_code = 111;
    if(n>0){
        checking_code = 999;
    }

    cout <<"\n ------------ Example 3: if-else statement --------- " << endl;    
    // check if a number is even or odd 
    if(n%2== 0 ){
        cout <<n<<" is EVEN "<< endl;
    }
    else{
        cout<<n<<" is ODD"<<endl;
    }

    cout <<"\n ------------ Example 4: if-else statement --------- " << endl;    
    // absolute value
    if(n>=0){
        cout<<n<<" is positive "<<endl;
    }
    else{
        cout<<n<<" is negative "<<endl;
        n*=-1;
        cout<<"Absolute value = "<<n<<endl;
    }

    cout <<"\n ------------ Example 5: multiway statement  --------- " << endl;    
    // selevt the color according to a wavelenght 
    int wavelenght = 0;
    string emitted_color = "";
    cout<<"Enter a wavelenght";
    cin>>wavelenght;
    // mutiway conditional statement
    if(0 <= wavelenght && wavelenght <= 379)
        emitted_color = "ultraviolet";
    else if(380 <= wavelenght && wavelenght <= 520)
        emitted_color = "blue";
    else if(521 <= wavelenght && wavelenght <= 590)
        emitted_color = "green";
    else if(591 <= wavelenght && wavelenght <= 740)
        emitted_color = "red";
    else if (wavelenght >= 741)
        emitted_color = "infrared";
    else
        emitted_color = "unable a read";

    //print result
    cout<<"The emitted color wavelenght "<<wavelenght<<" is "<<emitted_color<<endl;

    cout<<"\n ---------- EXERCISE ---------"<<endl;
    // declare variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    cout << "Enter homework grade (0-100): ";
    cin >> homework;
    cout << "Enter labs grade (0-100): ";
    cin >> labs;
    cout << "Enter final exam grade (0-100): ";
    cin >> final_exam;

    // compute weighted grade
    grade = final_exam * 0.5f + labs * 0.3f + homework * 0.2f;

    // assign GPA letter 
    if (grade >= 90 && grade <= 100) {
        gpa = "A";
    } else if (grade >= 80 && grade <= 89) {
        gpa = "B";
    } else if (grade >= 70 && grade <= 79) {
        gpa = "C";
    } else if (grade >= 60 && grade <= 69) {
        gpa = "D";
    } else if (grade < 59) {
        gpa = "F";
    } else {
        gpa = ""; 
    }

    cout << fixed << setprecision(1);
    cout << "A final grade of " << grade << " is equivalent to a GPA of " << gpa << endl;

    return 0; 
}
