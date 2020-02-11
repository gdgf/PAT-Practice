/*
 * 挖掘机学校那家强
 * 统计每一个学校的分数，然后得到答案。
 * 
 */
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int schoolID=0,score=0,maxschoolID=0,maxscore=0;
	int school[100000]={0};
	
	for(int i=0;i<n;i++){
		cin>>schoolID>>score;
		school[schoolID]+=score;
		
		if(school[schoolID]>maxscore){
			maxscore=school[schoolID];
			maxschoolID=schoolID;
		}
	}
	cout<<maxschoolID<<" "<<maxscore; 
	return 0;
}