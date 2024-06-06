/* Program to ask the user enter three marks then calculate the average of the Entered marks  with pass fail condition */

#include <iostream>
using namespace std;


int main()

{

    int mark1, mark2, mark3;
    cout << "Please Enter Your first Mark ! " << endl;
    cin >> mark1;

    cout << "Please Enter Your Second Mark ! " << endl;
    cin >> mark2;

    cout << "Please Enter Your third Mark ! " << endl;
    cin >> mark3;

    int avg = (mark1 + mark2 + mark3) / 3;

    cout << "Your Average is : " << avg << endl;

    if (avg >= 50) {

        cout << "Pass" << endl;


    }
    
    else {

        cout << "fail" << endl;
    }



    return 0;

    // created by @ilyes_trabelsi

}