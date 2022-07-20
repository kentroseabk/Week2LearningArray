// Week2LearningArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 7;

    int array[arraySize]{ 1, 7, 234, -54, 99, 384, -36};

    int largest = array[0];

    cout << "Displaying the array..." << endl;
    cout << "[";

    for (int i = 1; i < arraySize; i++)
    {
        if (array[i] > largest) largest = array[i];

        cout << array[i];

        if (i == arraySize - 1)
        {
            cout << "]" << endl;
        }
        else
        {
            cout << ", ";
        }
        
    }

    cout << "The largest number is " << largest;
}
