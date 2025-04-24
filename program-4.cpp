#include<iostream>
using namespace std;

void swap(int& a,int& b);

int main()
{
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    cout << "Before Swaping Values Are :- " << endl << num_1 << endl << num_2;
    swap(num_1 , num_2);
    cout << "After Swaping Values Are :- " << endl << num_1 << endl << num_2;

    return 0;
}

void swap(int& a,int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}