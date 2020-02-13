/*
 * 组个最小数：
 * 将输入的数据组个最小数，0不能做首位
 * 题目看错，输入有问题
 */
#include<iostream>
using namespace std;
int main() {
	char x[51];
	int num[10] = { 0 };
	int i = 0;
	char c;
	/*
	 * 这里的输入要注意一下，因为这里的输入没有个数限制，所以最后需要自己
	 * 限制个数，只能桶'\n'作为输入结束标准。
	 */
	while (cin >> x[i]) {
		//统计各个出现的次数
		switch (x[i])
		{
		case '0':
			num[0]++;
			break;
		case '1':
			num[1]++;
			break;
		case '2':
			num[2]++;
			break;
		case '3':
			num[3]++;
			break;
		case '4':
			num[4]++;
			break;
		case '5':
			num[5]++;
			break;
		case '6':
			num[6]++;
			break;
		case '7':
			num[7]++;
			break;
		case '8':
			num[8]++;
			break;
		case '9':
			num[9]++;
			break;
		default:
			break;
		}
		i++;
		if ((c = getchar()) == '\n')//判断输入是否完毕
			break;
	}
    cout<<endl;
    //cout<<i<<endl;
	
	int j;
	for (j = 1; j < i; j++) {
		//cout << "num" << j<< ":" << num[j] << endl;
		//输出一个除0以外的最小数
		if (num[j]!=0) {
			//cout << 10<<endl;
			cout << j;
			break;
		}
		//cout << j << endl;
	}
	for (int k = 0; k < i; k++) {
		if (k != j) {
			//输出num[k]个K
			for (int m = 0; m < num[k]; m++) {
				cout << k;
			}
		}
		else {
			//j输出num[k]-1个即可
			for (int m = 0; m < num[k] - 1; m++) {
				cout << k;
			}
		}
	}
	system("pause");
	return 0;
}