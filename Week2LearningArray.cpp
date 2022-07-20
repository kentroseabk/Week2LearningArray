// Week2LearningArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void ProcessArray(int array[], unsigned int arraySize);

void ProcessArray(int array[], unsigned int arraySize)
{
    int largest = array[0];

    cout << "Displaying the array..." << endl;
    cout << "[" << array[0];

    if (arraySize > 1)
    {
        cout << ", ";
    }
    else
    {
        cout << "]" << endl;
    }

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

    cout << "The largest number is " << largest << ".";
}

int main()
{
    const unsigned int arraySize = 6;

    int array[arraySize]{ 1, 45, -84, 31, 153, 17};

    ProcessArray(array, arraySize);
}
