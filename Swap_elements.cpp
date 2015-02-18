#include <iostream>

using namespace std;

//Recieve the first index and thrid last index, then swap
void swap (int array[], int first_index, int third_last_index ) {
    int temp = array[ first_index ];
    array[ first_index ] = array[ third_last_index ];
    array[ third_last_index ] = temp;
    }

void displayArray (int array[], int size) {
        cout << " { ";
        for ( int i = 0; i < size; i++ )
        {   // lists--check if we're past the first element, and
            // if so, append a comma
            if ( i != 0 )   {
                cout << ", ";
            }
            cout << array[ i ];
            }
            cout << " } \n";
}
int main()
{
    int numbers;
    cout << "SIZE OF LIST: " << endl;
    cin >> numbers;
    cout << "*** START *** \n" << endl;

    int i = 0;
    int array[numbers];
    while (i < numbers){
            cout << "Number"<< "(" << i+ 1 << "): " << endl;
            cin >> array[i];
            i = i + 1; // We loop here until while loop is false then we exit loop
    }
    
    //Size of our array is numbers - 1 eg if we enter 5 values. size of element is 4 since we start from position [0]
    //To find third last index then numbers - 1 - 2 which is equiv to numbers - 3
    int third_last_index = numbers - 3;
    int first_index = 0;

    cout << "______________________________________ \n \n";
    cout << "OUR ARRAY: "; displayArray(array, numbers); cout << "\n";
    //Take original array and swap then display resulting array below
    swap(array, first_index, third_last_index );
    cout << "--------------------------------------- \n \n";
    cout << "SWAP 3RD LAST ELEMENT WITH 1ST ELEMENT \n";
    cout << "SO IN THIS CASE WE SWAP (" << array[first_index] << ") WITH (" << array[third_last_index] <<") \n" <<  endl;
    cout << "______________________________________ \n \n";
    cout << "SWAPPED: "; displayArray(array, numbers);
    cout << "______________________________________ \n";

}
