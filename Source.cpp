#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
	bool judgeCircle(string moves) {
		char check[4] = { 0 }; // LRUD
		if (moves.size() % 2) // moves.length()
		{
			return false;
		}

		else
		{
			for (auto i : moves) // (var i : moves)
			{
				toupper(i); //moves.toUpperCase()
				switch (i)
				{
				case 'L':
					check[0] ++;
					break;
				case 'R':
					check[1] ++;
					break;
				case 'U':
					check[2] ++;
					break;
				case 'D':
					check[3] ++;
					break;
				}
			}
		}

		if (check[0] == check[1] && check[2] == check[3])
			return true;
		else
			return false;
	}
};


int T(int x, int y, int z)
{
	if (x <= y)
	{
		return y;
	}
	else
	{
		return T(T(x - 1, y, z), T(y - 1, z, x), T(z - 1, x, y));
	}
}
//?? x ????y
//??x????z


int T1(int x, int y, int z)
{
	if (x <= y)
	{
		return y;
	}
	else
	{
		if (y <= z)
			return z;
		else
			return x;
	}
	//if (x >= y && x >= z)
	//	return x;
		
}




int main()
{
	cout << to_string(T(1, 2, 3)) + "======" + to_string(T1(1, 2, 3)) << endl; // 2
	cout << to_string(T(1, 3, 2)) + "======" + to_string(T1(1, 3, 2)) << endl; // 3
	cout << to_string(T(3, 2, 1)) + "======" + to_string(T1(3, 2, 1)) << endl; // 3
	cout << to_string(T(3, 1, 2)) + "======" + to_string(T1(3, 1, 2)) << endl; // 2
	cout << to_string(T(2, 1, 3)) + "======" + to_string(T1(2, 1, 3)) << endl; // 3
	cout << to_string(T(2, 3, 1)) + "======" + to_string(T1(2, 3, 1));         // 3
	
	
	cout << "d";
	
	system("pause");
	return 0;
}