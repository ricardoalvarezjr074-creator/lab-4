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
void outputArrayData(double* array, int size)
{
    cout <<"Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

// function to calculate the sum
double sumArray(double* array, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }
    return sum;
}

int main()
{
    const int SIZE = 5;
    double* numbers = new double[SIZE];
    enterArrrayData(numbers, SIZE);
    outputArrayData(numbers, SIZE);
    cout << "Sum of values:" << sumArray(numbers, SIZE) << endl;

    delete[] numbers;
    return 0;
}
