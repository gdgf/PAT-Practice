//按照成绩进行排名
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Student{
  string name;
  string id;
  int grade;
};

int cmp(Student S1,Student S2){
   return S1.grade< S2.grade;
}

int main(){
  int n;
  cin>>n;
  Student student[n];
  for(int i=0;i<n;i++){
      cin>>student[i].name>>student[i].id>>student[i].grade;
  }
  sort(student,student+n,cmp);
  cout<<student[n-1].name<<" "<<student[n-1].id<<endl;
  cout<<student[0].name<<" "<<student[0].id<<endl;
  return 0;
}
