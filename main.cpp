#include <iostream>
using namespace std;

// function to enter the vaules 
void enterArrrayData(double* array, int size)
{
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "    > Element#" << i << ": ";
        cin >> array[i];
    
    }
    cout << "Data entry completed!" << endl;
}

// function to display the values
void displayArrayData(double* array, int size)
{
    cout <<"Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        count << *(array + i) << " ";
    }
    cout << endl;
}