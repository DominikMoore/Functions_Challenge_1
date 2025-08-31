//Dominik Moore
//1 September 2025
//MJC Comp Sci 2
//The purpose of the program is to calculate the area and or perimeter of a circle or rectangle

#include <iostream>
#include <limits>
using namespace std;                                        //dont have to keep writing std::cout/cin

double calculateArea (const double radius) {                // calculate area of circle
    const double PI = 3.14159;
    return PI * radius * radius;
}

double calculatePerimeter(const double radius) {            // calculate circumference of circle
    const double PI = 3.14159;
    return 2 * PI * radius;
}

double calculateArea(const double length, const double width) {                 //calculate area of rectangles
    return length * width;
}

double calculatePerimeter(const double length, const double width) {            // calculate perimeter of rectangle
    return 2 * (length + width);
}

int main() {
    int usrInput;
    double radius, length, width;
    do {
        cout << "Welcome to Geometric Calculations!\n**********************************" << endl;           //
        cout << "Please Pick What to Calculate." << endl;                                                   //
        cout << "Please Enter the Number 1 to Calculate the Area of a Circle." << endl;                     //
        cout << "Please Enter the Number 2 to Calculate the Perimeter of a Circle." << endl;                //"menu"
        cout << "Please Enter the Number 3 to Calculate the Area of a Rectangle." << endl;                  //
        cout << "Please Enter the Number 4 to Calculate the Perimeter of a Rectangle." << endl;             //
        cout << "Please Enter the Number 5 to Exit the Program." << endl;                                   //

        cin >> usrInput;
        if (cin.fail()) {                                                                           //validates code
            cout << "Invalid Character's, Please Enter a Number." << endl;                          //makes sure it is good input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
        if (usrInput < 1 || usrInput > 5 ) {                                                        //makes sure only a number 1-5
            cout << "Invalid Number Please Try again." << endl;
            continue;
        }

        switch (usrInput) {                                                                         //switch to allow the user to pick
            case 1: // Area of circle                                                               // and enter data
                cout << "Enter the radius: ";
                cin >> radius;
                cout << "Area of a Circle: " << calculateArea(radius) << endl;
                break;

            case 2: // Perimeter of circle
                cout << "Enter the radius: ";
                cin >> radius;
                cout << "Perimeter of a Circle: " << calculatePerimeter(radius) << endl;
                break;

            case 3: // Area of rectangle
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> width;
                cout << "Area of a Rectangle: " << calculateArea(length, width) << endl;
                break;

            case 4: // perimeter of rectangle
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> width;
                cout << "Perimeter of a Rectangle: " << calculatePerimeter(length, width) << endl;
                break;
            case 5: //end
                cout << "Exiting Program. Thank you!" << endl;
                break;
        }
    }   while (usrInput != 5);                                                                  // if input is not 5, the code will continue
                                                                                                //once input is 5 the code will come to an end
    return 0;
}

//
//I did get help using AI for the limits part. I have never used limits before, was never introduced to me.
// I looked up how to use it, tried to make it myself and had AI clean it up and tell me what I did wrong.
//Hope that's okay.
//In my past coding class we made a bunch of loops to validate inputs, never used limits.
// we used other things like isalpha or isnumeric
//stuff like that