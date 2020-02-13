/*
 旧键盘
  
*/
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

//字符串全部变为大写字母
void  capital(char * x,int len){
      for(int i=0;i<len;i++){
          if(x[i]>='a'&&x[i]<='z')
              x[i]-=32;
      }
}

//在一个字符串中查找是否存在一个字母
bool notfindchar(char *str,int len,char x){
   for(int i=0;i<len;i++){
       if(str[i]==x) return false;
   }
   return true;
}
int main(){
    char str1[81],str2[81];
    char save[81];   //保存坏掉的键
    //memset(str1, 0, sizeof(str1));
    //memset(str2, 0, sizeof(str2));
    //memset(save, 0, sizeof(save));    
    //scanf("%s\n%s",str1,str2);
    cin>>str1>>str2;
    int j=0;
    capital(str1,strlen(str1));
    capital(str2,strlen(str2));
    //cout<<str1<<""<<str2<<endl;
    //找出在a中出现而不再b中出现的字符
    for(int i=0;i<strlen(str1);i++){
         if(notfindchar(str2,strlen(str2),str1[i])){
             save[++j]=str1[i];
         }
    }
    /*
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!=str2[i]){
            if(notfindchar(save,j,str1[i])){
                    save[++j]=str1[i];
                    i++;
            }
        }
    }
    */
    cout<<save<<endl;
    for(int i=0;i<j;i++){
        if(notfindchar(save,i,save[i]))
            cout<<save[i];
            //printf("%c",save[i]);
    }
    printf("\n");
    return 0;
}