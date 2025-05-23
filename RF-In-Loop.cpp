#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Value Of Array["<< i <<"] :- ";
        cin >> array[i];
    }
    
    // for (int i = 0; i < size; i++)
    // {
    //     array[i];
    // }

    for (int i = 0; i < size; i++)
    {
        cout << "The Value of Array[" << i << "] :- " << array[i] << endl;
    }
    
    return 0;
}