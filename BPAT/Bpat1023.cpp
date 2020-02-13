/*
 * 组个最小数：
 * 将输入的数据组个最小数，0不能做首位
 */
#include<iostream>
using namespace std;
int main() {
	char x[51];
	int num[10] = { 0 };
	int i = 0;
	char c;
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
	int j;
	for (j = 1; j < 10; j++) {
		//cout << "num" << j<< ":" << num[j] << endl;
		//输出一个除0以外的最小数
		if (num[j]!=0) {
			//cout << 10<<endl;
			cout << j;
			break;
		}
		//cout << j << endl;
	}
	for (int k = 0; k < 10; k++) {
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
	//system("pause");
	return 0;
}