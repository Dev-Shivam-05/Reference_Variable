#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    int i;

    for (i=0; i<size; i++)
    {
        cout << "Enter The Value Of Array["<< i <<"] :- ";
        cin >> array[i];
    }

    int index,new_num;

    cout << "Enter A Index To Update :- ";
    cin >> index;
    cout << "Enter A Number To Update :- ";
    cin >> new_num;
    
    int& ref_1 = array[index];
    
    ref_1 = new_num;

    cout << "The New Array Is :- " << endl;

    for (i=0; i<size; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}