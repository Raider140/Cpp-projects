//---------------Programming Assignment 9---------------//


#include <iostream>
#include <string>

using namespace std;


//initial display
void showArray(int array[], int ARRAY_SCALE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SCALE; i++)
        cout << array[i] << " ";
    cout << endl;
}
//swich function for both sorting algorithms
void swich(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//ascending bubblesort function
void bubbleSort(int array[], int ARRAY_SCALE)
{
    
    int pass = 0;
    //for array scale
    for (int max_integer = --ARRAY_SCALE ; max_integer > 0; max_integer--)
    {       
        //for compare adjacent values
        for (int index = 0; index < max_integer; index++)
        {
            //switch values if previous value is less than the next value
            if (array[index] > array[index + 1])
                swich(array[index], array[index + 1]);
        }

        cout << "\nPass #" << pass + 1 << ":\t ";
        for (int i = 0; i < ARRAY_SCALE; i++)
            cout << array[i] << " ";

        pass++;
    }
    cout << endl << endl;
}

void selectionSort(int array[], int ARRAY_SCALE)
{
    int min_index,
        min_value,
        pass = 0;
    
    //designate base index
    for (int begin_index = 0; begin_index < (ARRAY_SCALE-1); begin_index++)
    {
        min_index = begin_index;
        min_value = array[begin_index];
        
        //designate subindex
        for (int index = begin_index + 1; index < ARRAY_SCALE; index++)
        {
            if (array[index] < min_value)
            {
                min_index = index;
                min_value = array[index];
            }
        }
        swich(array[min_index], array[begin_index]);

        cout << "\nPass #" << (pass + 1) << ":\t";
        for (int i = 0; i < ARRAY_SCALE; i++)
            cout << array[i] << " ";

        pass++;
    }
    cout << endl;
}

int main()
{
    const int ARRAY_SCALE = 8;
    int array_0[ARRAY_SCALE] = {1, 46, 12, 231, 123, 542, 10, 71};
    int array_1[ARRAY_SCALE] = {1, 46, 12, 231, 123, 542, 10, 71};

    //bubble sort display and run algorithm
    cout << "\t|BUBBLE SORT|" << endl;
    showArray(array_0, ARRAY_SCALE, "Unsorted:");
    
    bubbleSort(array_0, ARRAY_SCALE);
    
    showArray(array_0, ARRAY_SCALE, "Sorted:");
    
    
    //selection sort display and run algorithm 
    cout << "\n\t|SELECTION SORT|" << endl;
    showArray(array_1, ARRAY_SCALE, "Unsorted:");
    
    selectionSort(array_1, ARRAY_SCALE);
    
    showArray(array_1, ARRAY_SCALE, "\nSorted:");
    cout << endl;
    
    return 0;
} // End int main()

