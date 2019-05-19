#include <iostream>
#include <conio.h>
using namespace std;

const int province = 3;
const int day = 7;

int main()
{
    int temperature[province][day];

    cout << "Enter all temperature for the first, second, and third city consecutively for a week. \n";

    for (int p = 0; p < province; ++p)
    {
        for(int d = 0; d < day; ++d)
        {
            cout << "Province " << p + 1 << ", Day " << d + 1 << " : ";
            cin >> temperature[p][d];
        }
    }

    cout << "\nDisplaying Temperature Values:\n";

    for (int p = 0; p < province; ++p)
    {
        for(int d = 0; d < day; ++d)
        {
            cout << "Province " << p + 1 << ", Day " << d + 1 << " = " << temperature[p][d] << " degree Celsius" << endl;
        }
    }
	_getch();
    return 0;
}
