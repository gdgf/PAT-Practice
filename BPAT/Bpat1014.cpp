#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
	string s1, s2, s3, s4;
	string week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	while (cin >> s1 >> s2 >> s3 >> s4)
	{
		int flag = 0;
		int len = s1.length() > s2.length() ? s2.length() : s1.length();

		for (int i = 0; i <= len; i++)
		{
			if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
			{
				int m = s1[i] - 'A' + 10;
				cout << week[m%10] << ' ';
				flag = i;
				break;
			}
		}
		
		for (int j = flag + 1; j <= len; j++)
		{
			if (s1[j] == s2[j] && (s1[j] >= 'A' && s1[j] <= 'N' || s1[j]>='0' && s1[j] <= '9'))
			{
				if (s1[j] >= 'A' && s1[j] <= 'N')
				{
					int x = s1[j] - 'A' + 10;
					cout << x / 10 << x % 10 << ":";
				}
				else
				{
					int y = s1[j] - '0';
					cout << y / 10 << y % 10 << ":";
				}
				break;
			}
		}
 
		len = s3.length() > s4.length() ? s4.length() : s3.length();
		for (int k = 0; k <= len; k++)
		{
			if (s3[k] == s4[k] && (s3[k] >= 'A' && s3[k] <= 'Z' || s3[k]>='a' && s3[k] <= 'z'))
			{
				cout << k / 10 << k % 10;
				break;
			}
		}
	}
    return 0;
}