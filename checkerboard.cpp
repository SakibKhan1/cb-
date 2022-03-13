/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Checkerboard
Writes a checkerboard using
alternating spaces and asterisks.
*/

#include <iostream>
using namespace std;
int main()
{
    int width, height; //positive integers used for w/h.
    cout << "Input width ";
    cin >> width;
    cout << "Input height ";
    cin >> height;
    cout << "Shape: " << endl;
    for (int i=0; i < height; i++) //nested for loops for width and height.
    {
        for (int j=0; j < width; j++)
        {
            if ((i+j)%2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
