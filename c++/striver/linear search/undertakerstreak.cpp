#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int t[100000];
		int a, q, y = 0;

		scanf("%d", &a);
		if (a % 21 == 0)
		{
			cout << "The streak is broken!" << endl;
		}
		else
		{
			for (int i = 0; a > 0; i++)
			{
				t[i] = a % 10;
				q = i;
			}
			for (int i = 0; i < q-1; i++)
			{
				if ((t[i] == 2) && (t[i + 1] == 1))
				{
					y++;

					break;
				}
			}
			if (y > 0)
			{
				cout << "The streak is broken!" << endl;
			}
			else
			{
				cout << "The streak lives still in our heart!" << endl;
			}
		}
	}
}