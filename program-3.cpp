#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A Number :- ";
    cin >> num_1;

    int& ref_1 = num_1;

    ref_1 += 30;

    cout << num_1 << endl;
    return 0;
}