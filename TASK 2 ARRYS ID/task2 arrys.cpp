#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	int arr[size];
	int n = 0;

	cout << "enter number of elements: " << endl;
	cin >> n;

	cout << "ENTER ELEMENTS: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ;
    }

	cout << "duplicate elements: ";

	for (int i = 0; i < n; i++)
	{
		for(int j=i+1;j<n;j++)
		{ 
			if (arr[i] == arr[j])
			{
				cout << arr[i] << " ";
				break;
			}
	    }
	}
	return 0;
}