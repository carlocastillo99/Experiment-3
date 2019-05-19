#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int arr[10], n=10, i, maximum, minimum;
    float sum=0, avg;
    cout << "Input 10 numbers (Press 'ENTER' after each chosen number): ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    maximum = arr[0];
    for (i = 0; i < n; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }
    minimum = arr[0];
    for (i = 0; i < n; i++)
    {
        if (minimum > arr[i])
            minimum = arr[i];
    }
    for (i=0; i < n; i++)
	{
	sum = sum + arr[i];
	avg=sum/n;
	}
    cout << "The largest element is: " << maximum;
    cout << "\nThe smallest element is: " << minimum;
    cout << "\nThe sum of the elements of the array is: " << sum;
    cout << "\nThe average of the elements of the array is: " << avg;
    _getch();
    return 0;
}
