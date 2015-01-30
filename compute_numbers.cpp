#include <iostream>
/* By Malcolm Maima */
using namespace std;

//Function to compute the sum of the numbers entered
int sumArray (int values[], int size) {
    int sum = 0;
    for ( int i = 0; i < size; i++ )  {
            sum += values[ i ];
    }
        return sum;
    }

//Function to compute the average of the numbers entered
int averageArray (int values[], int size){
    int average = 0;
    for (int i = 0; i < size; i++) {
        average += values[i]/size;
    }
    return average;
}

//Function to compute the highest of the entered numbers
int largestArray (int values[], int size){
    int highest = 0;
    for (int i = 0; i < size; i++) {
            if(values[i] > highest){
                highest = values[i];
            }
    }
    return highest;
}


int main(){
    int numbers;
    cout << "How many numbers do you want to enter: " << endl;
    cin >> numbers;

    int i = 0;
    int sum[numbers];
    while (i < numbers){
            cout << "Enter number: " << endl;
            cin >> sum[i];
            i = i + 1; // We loop here until while loop is false then we exit loop
    }
    cout << "*****************" << endl;
    cout << "SUM ==> " << sumArray( sum, numbers ) << endl;
    cout << "AVERAGE ==> " << averageArray(sum, numbers) << endl;
    cout << "HIGHEST ==> " << largestArray(sum, numbers)<< endl;
    cout << "***** Done! *****" << endl;
}


