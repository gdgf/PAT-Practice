/*
 人口普查,
 输入可能有错误，超出200岁，或者还没出生。
 */

#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;

vector<string> split(const string& str, const string& delim) {
	vector<string> res;
	if ("" == str) return res;
	//先将要切割的字符串从string类型转换为char*类型  
	char * strs = new char[str.length() + 1]; //不要忘了  
	strcpy(strs, str.c_str());
	char * d = new char[delim.length() + 1];
	strcpy(d, delim.c_str());
	char *p = strtok(strs, d);
	while (p) {
		string s = p; //分割得到的字符串转换为string类型  
		res.push_back(s); //存入结果数组  
		p = strtok(NULL, d);
	}
	return res;
}
bool issave(vector<string> x) {
	if ((x[0] <= "2014"&&x[1] <= "9"&&x[2] <= "6") && (x[0] >= "1814"&&x[1] >= "9"&&x[2] >= "6")) {
		return true;
	}
	else
	{
		return false;
	}
}
struct people {
	string name;
	string birthday;
};
int main() {
	int n;
	cin >> n;
	vector<vector<string>> data;
	people * P = new people[n];
	people * P1 = new people[n];
	int j = 0;
	for (int i = 0; i < n; i++) {
		cin >> P[i].name >> P[i].birthday;
		data[i] = split(P[i].birthday, "/");
		cout << data[i][0] << " " << data[i][1] << " " << data[i][2] << endl;
		//if(data[i][0]<=2014&&data[i][1]<=9&&data[i][2]<=6)
		if (issave(data[i])) {
			P1[j++] = P[i];
		}
	}
	for (int i = 0; i < j; i++) {
		cout << P1[i].name<< " " << P1[i].birthday << endl;
	}

	system("pause");
	return 0;
}