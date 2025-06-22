#include<iostream>
using namespace std ;

int main()
{
    int n;
    int number;
    int positive = 0 , negative = 0 , zero = 0;
    
    cout<<"How many numbers do you want to Enter?";
    cin>>n;

    for (int i=1; i<=n ; i++) 
    {
        cout<<"Enter  number"<< i << ":";
        cin >> number;

        if (number>0)
            positive++ ;
        else if (number<0)
            negative++;
        else 
            zero++;
    }
    cout << "\n Results:" << endl;
    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Zeroes: " << zero << endl;


    return 0;
}