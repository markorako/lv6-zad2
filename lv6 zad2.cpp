

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int b = 0;
	cin >> n;
	cin >> b;
	if (n > 2 && n <= 4)
	{
		cout << "ispravna" << endl;
		if (b >= 80)
		{
			cout << "FINALE";
		}
		else if (b >= 50 && b < 80)
		{
			cout << "POLUFINALE";
		}
		else if (b < 50)
		{
			cout << "Ispala";
		}
	}
	
	else
	{
		cout << "Neispravna." << endl;
	}
	
	
	
	return 0;
}

