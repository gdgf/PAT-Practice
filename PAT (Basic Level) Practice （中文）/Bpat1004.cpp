//按照成绩进行排名
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
  string name;
  string id;
  int grade;
};

int main(){
  int n;
  cin>>n;
  Student *student =new Student[n];
  for(int i=0;i<n;i++){
      cin>>student[i].name>>student[i].id>>student[i].grade;
  }

  Student minstudent,maxstudent;
  //cout<<minstudent.grade<<"  "<<endl;
   maxstudent=minstudent=student[0];

  for(int i=0;i<n;i++){
    if(maxstudent.grade<student[i].grade){
      maxstudent=student[i];
    }
    if(minstudent.grade>student[i].grade){
      minstudent=student[i];
    }
  }

  cout<<maxstudent.name<<" "<<maxstudent.id<<endl;
  cout<<minstudent.name<<" "<<minstudent.id<<endl;
  return 0;
}
