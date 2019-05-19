#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
   char arr[100];
   int size, i;
   cout<<"Enter the array size: ";
   cin>> size;
   cout<<"Enter array elements consecutively (can be a combination of numbers: 0-9, letters: a-z, \nsymbols: e.g. # @ $ , or combination of the three): ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
 
   strrev(arr);
 
   printf("The reverse of the elements is: \n%s\n", arr);
   
   _getch();
   return 0;
   
}
