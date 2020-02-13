#include<stdio.h>
#include<string.h>
 
int main()
{
  //两个存储匹配数组务必预留结尾'\0'位，可以把高位的第一位留空，以便和数字匹配
  char szD[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
  char szG[13][4]={"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
  int iNum=0;
  scanf("%d",&iNum);
  getchar();//scanf和gets连用的时候，一定注意scanf后面的回车要去掉
  char szData[iNum][9];
  for(int i=0;i<iNum;i++)
  {
    gets(szData[i]);
  }
  int iSum=0;
  for(int i=0;i<iNum;i++)
  {
    iSum=0;
    //判断为地球数字:存在数字，即为地球数字。
    if(szData[i][0]>='0'&&szData[i][0]<='9')
    {
      //得到数字值:字符转数字
      for(int j=0;j<strlen(szData[i]);j++)
      {
        iSum=iSum*10+szData[i][j]-'0';
      }

      //分类输出
      if(iSum/13!=0 && iSum%13!=0)
      {
        printf("%s %s",szG[iSum/13],szD[iSum%13]);
      }
      //有整数个13
      else if(iSum/13!=0 && iSum%13==0)
      {
      	printf("%s",szG[iSum/13]);
	    }
      //只有个位数字
	    else if(iSum/13==0)
	    {
        printf("%s",szD[iSum%13]);
      }
    }
    else
    {
      //只有一位火星数字的情况
      if(strlen(szData[i])<=4)
      {
        for(int j=0;j<13;j++)
        {
          if(strcmp(szData[i],szD[j])==0)
          {
            iSum=j;
            break;
          }
          else if(strcmp(szData[i],szG[j])==0)
          {
          	iSum=j*13;
          	break;
		      }
        }
      }
      //两位火星数字的情况
      else
      {
        for(int j=0;j<13;j++)
        {
          if(strncmp(szData[i],szG[j],3)==0)//比较前3位，即高位
          {
            iSum+=13*j;
          }
          if(strcmp(&szData[i][4],szD[j])==0)
          {
            iSum+=j;
          }
        }
      }
      printf("%d",iSum);
    }
    if(i!=iNum-1)
    {
      printf("\n");
    }
  }
  return 0;
}